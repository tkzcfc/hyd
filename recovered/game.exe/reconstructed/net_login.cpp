// 网络/登录可读重建（非原始源码）
#include "net_login.h"

#include <cstdio>
#include <cstring>
#include <iphlpapi.h>

// 外部全局（映像地址）【确定】
static char (&g_account)[0x0C] = *reinterpret_cast<char (*)[0x0C]>(kAddr_AccountBuf);
static char (&g_password)[0x11] = *reinterpret_cast<char (*)[0x11]>(kAddr_PasswordBuf);
static SOCKET& g_sock = *reinterpret_cast<SOCKET*>(kAddr_LoginSocket);

// TODO(CRT): fopen/_strcspn 等按原机 CRT thunk 调用；此处写标准 C 语义

// ---- 0x68de00 read_dnf_login_txt 【确定】----
bool read_dnf_login_txt() {
    FILE* fp = std::fopen("DnfLogin.txt", "r");
    if (!fp) return false;
    char line1[256]{};
    char line2[256]{};
    // FUN_006f3f68 ≈ fgets
    if (!std::fgets(line1, 0xff, fp)) {
        std::fclose(fp);
        return false;
    }
    if (!std::fgets(line2, 0xff, fp)) {
        std::fclose(fp);
        return false;
    }
    line1[std::strcspn(line1, "\r\n")] = '\0';
    line2[std::strcspn(line2, "\r\n")] = '\0';
    std::strncpy(g_account, line1, 0x0B);
    g_account[0x0B] = '\0';  // DAT_007ca20f
    std::strncpy(reinterpret_cast<char*>(kAddr_PasswordBuf), line2, 0x10);
    *reinterpret_cast<char*>(0x007ca220) = '\0';
    std::fclose(fp);
    return true;
}

// ---- 0x6a3140 / 0x6a31a0 【确定】----
bool net_wsa_startup() {
    WSADATA wsa{};
    return ::WSAStartup(0x0202, &wsa) == 0;
}

void net_wsa_cleanup_wrapper() { ::WSACleanup(); }

// ---- 0x6a34a0 / 0x6a34d0 / 0x6a34f0 【确定】----
uint32_t net_packet_write_u32_be(void* dst, uint32_t host_val) {
    *reinterpret_cast<uint32_t*>(dst) = ::htonl(host_val);
    return 4;
}

uint32_t net_packet_write_bytes(void* dst, const void* src, uint32_t n) {
    std::memcpy(dst, src, n);
    return n;
}

uint32_t net_packet_read_u32_be(uint32_t* out_host, const uint32_t* src_be) {
    *out_host = ::ntohl(*src_be);
    return 4;
}

// ---- 0x6a31b0 net_socket_send_all 【确定】----
int net_socket_send_all(const void* buf, int len) {
    int sent = 0;
    const char* p = static_cast<const char*>(buf);
    while (len > 0) {
        int n = ::send(g_sock, p + sent, len, 0);
        if (n == SOCKET_ERROR || n == 0) return 0;
        sent += n;
        len -= n;
    }
    return sent;
}

// ---- 0x6a55d0 【确定】硬编码 IP，忽略 [server] 列表 ----
bool net_create_socket_or_fail(SOCKET* out, uint16_t port) {
    *out = ::socket(AF_INET, SOCK_STREAM, 0);
    if (*out == INVALID_SOCKET) {
        MessageBoxA(nullptr, "Failed to create socket\n", nullptr, 0);
        return false;
    }
    sockaddr_in addr{};
    addr.sin_family = AF_INET;
    addr.sin_port = ::htons(port);
    ::inet_pton(AF_INET, kHardcodedLoginHost, &addr.sin_addr);
    if (::connect(*out, reinterpret_cast<sockaddr*>(&addr), sizeof(addr)) == SOCKET_ERROR) {
        MessageBoxA(nullptr, "Failed to connect to server\n", nullptr, 0);
        ::closesocket(*out);
        return false;
    }
    return true;
}

// ---- 0x6a3fe0 通用：size|opcode|account[0xC]|payload 【确定】----
bool net_packet_send_opcode_with_account_payload(uint32_t opcode, const void* payload,
                                                 int payload_len) {
    const size_t size = static_cast<size_t>(payload_len) + 0x14;
    void* buf = std::malloc(size);
    if (!buf) return false;
    std::memset(buf, 0, size);
    uint32_t o = 0;
    o += net_packet_write_u32_be(static_cast<char*>(buf) + o, static_cast<uint32_t>(size));
    o += net_packet_write_u32_be(static_cast<char*>(buf) + o, opcode);
    o += net_packet_write_bytes(static_cast<char*>(buf) + o, g_account, 0x0C);
    net_packet_write_bytes(static_cast<char*>(buf) + o, payload, payload_len);
    bool ok = net_socket_send_all(buf, static_cast<int>(size)) != 0;
    std::free(buf);
    return ok;
}

// 前向：收包线程 / 入队 / 登录等待
extern void net_packet_queue_push(void** packet_ptr); // 0x40d490 【确定】包装 → 0x40e5d0
extern void net_recv_mutex_lock();   // 0x4cee80 【推断】
extern void net_recv_mutex_unlock(); // 0x4ceec0 【推断】
extern int game_wait_login_response(uint32_t expect_opcode); // game_missing_asset_fallback_2 @ 调用点 0x14
extern void* game_loop_get_context_642740();

// ---- 0x4f2490 收包线程【确定】----
DWORD WINAPI net_socket_recv_thread_proc(LPVOID sock_param) {
    SOCKET s = reinterpret_cast<SOCKET>(sock_param);
    for (;;) {
        uint32_t len_be = 0;
        int got = ::recv(s, reinterpret_cast<char*>(&len_be), 4, 0);
        if (got <= 0) {
            net_recv_mutex_lock();
            ::closesocket(s);
            ::WSACleanup();
            // game_get_global_ptr_f2480：断线标志置 1 【确定】
            net_recv_mutex_unlock();
            return 0;
        }
        while (got < 4) {
            int n = ::recv(s, reinterpret_cast<char*>(&len_be) + got, 4 - got, 0);
            if (n <= 0) {
                ::closesocket(s);
                return static_cast<DWORD>(-1);
            }
            got += n;
        }
        uint32_t total = 0;
        net_packet_read_u32_be(&total, &len_be);
        if (static_cast<int>(total) < 1) {
            MessageBoxA(nullptr, "接收错误", nullptr, 0);
        }
        void* packet = std::malloc(total);
        if (!packet) {
            MessageBoxA(nullptr, "内存分配失败", nullptr, 0);
        }
        std::memset(packet, 0, total);
        // 若首帧已含全部长度字节则拷贝；否则继续 recv 剩余
        // 【确定】见伪代码分支 local_8 vs local_10
        std::memcpy(packet, &len_be, got < 4 ? got : 4);
        // TODO(0x4f2490): 精确补全剩余 recv 循环（伪代码已有）
        net_recv_mutex_lock();
        net_packet_queue_push(&packet);
        net_recv_mutex_unlock();
        // 不在此按 opcode 分发【确定】；主线程消费队列
    }
}

// ---- 0x68dfc0 连接 + 登录包 + 收包线程【确定】----
bool net_login_connect_and_spawn_thread() {
    net_wsa_startup();
    if (!net_create_socket_or_fail(&g_sock, kHardcodedLoginPort)) {
        ::closesocket(g_sock);
        net_wsa_cleanup_wrapper();
        return false;
    }
    ::CreateThread(nullptr, 0, net_socket_recv_thread_proc, reinterpret_cast<LPVOID>(g_sock), 0,
                   nullptr);

    constexpr size_t kSize = 0x25;
    void* buf = std::malloc(kSize);
    if (!buf) return false;
    std::memset(buf, 0, kSize);
    uint32_t o = 0;
    o += net_packet_write_u32_be(static_cast<char*>(buf) + o, static_cast<uint32_t>(kSize));
    o += net_packet_write_u32_be(static_cast<char*>(buf) + o, net_opcode::kLogin);
    o += net_packet_write_bytes(static_cast<char*>(buf) + o, g_account, 0x0C);
    o += net_packet_write_bytes(static_cast<char*>(buf) + o,
                                reinterpret_cast<void*>(kAddr_PasswordBuf), 0x11);
    net_socket_send_all(buf, static_cast<int>(kSize));
    std::free(buf);

    // 【确定】等待 opcode 0x14 相关登录应答（原名 game_missing_asset_fallback_2）
    game_wait_login_response(0x14);
    int* ctx = reinterpret_cast<int*>(game_loop_get_context_642740());
    if (*ctx == 0) {
        MessageBoxA(nullptr, "账号已登录，请务重复登录", "错误", 0);
        return false;
    }
    if (*ctx == -1) {
        MessageBoxA(nullptr, "输入密码错误，请重新输入", "错误", 0);
        return false;
    }
    return true;
}

// ---- 0x68e170 GetAdaptersInfo → MAC 字符串 → opcode 0x183ee【确定】----
void net_get_adapters_info() {
    char mac[0x12];
    // 默认 "00-00-00-00-00-00" 变体【确定】
    std::memcpy(mac, "00-00-00-00-00", 0x0E); // 伪代码初始值略有变形
    ULONG len = 0;
    if (GetAdaptersInfo(nullptr, &len) == ERROR_BUFFER_OVERFLOW) {
        auto* info = reinterpret_cast<IP_ADAPTER_INFO*>(std::malloc(len));
        if (!info) {
            net_packet_send_opcode_with_account_payload(net_opcode::kMacAdapterReport, mac, 0x12);
            return;
        }
        if (GetAdaptersInfo(info, &len) == NO_ERROR) {
            // 【确定】优先 Type==MIB_IF_TYPE_ETHERNET(6) 或 0x47，且 AddressLength==6
            // 格式化 "%02X-%02X-..." 后发送
            // TODO(0x68e170): 完整适配器遍历逻辑见 decompiled
        }
        std::free(info);
        net_packet_send_opcode_with_account_payload(net_opcode::kMacAdapterReport, mac, 0x12);
    } else {
        net_packet_send_opcode_with_account_payload(net_opcode::kMacAdapterReport, mac, 0x12);
    }
}

// ---- 0x5e7940 [server] 解析【确定】打开 etc/channel_info.etc，不参与 connect ----
void parse_server_config_section() {
    // etc_file_open_helper → 读文件 → 找 "[server]" / "[/server]"
    // 循环 getline：name / ip? / 其它字段 / 11 次额外字段 → parse_server_entry_finalize
    // 条目大小 100 字节（vector stride）【确定】于 FUN_005fb230 等
    // TODO(0x5e7940): 字段名对应 DAT_007654xx 格式串（%d / name / ` %s`）
}
