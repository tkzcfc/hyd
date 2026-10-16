// 网络/登录模块可读重建（非原始源码；由 game.exe 静态分析恢复）
// 证据标记：【确定】直接见于反编译/数据；【推断】由用法推断
#pragma once

#include <winsock2.h>
#include <windows.h>
#include <cstdint>
#include <cstddef>

#include "packet.h"

// ---------------------------------------------------------------------------
// 全局会话缓冲（.data）
// ---------------------------------------------------------------------------

// 【确定】DnfLogin.txt 第一行 → strncpy 至 DAT_007ca204，最多 0xB 字符 + NUL @ 0x007ca20f
// 发包时常按 0xC 字节写入（含尾 0）
constexpr std::uintptr_t kAddr_AccountBuf = 0x007ca204;
constexpr std::size_t kAccountCap = 0x0C; // 写入包内长度【确定】

// 【确定】第二行 → DAT_007ca210，最多 0x10 字符 + NUL @ 0x007ca220；包内写 0x11 字节
constexpr std::uintptr_t kAddr_PasswordBuf = 0x007ca210;
constexpr std::size_t kPasswordCap = 0x11;

// 【确定】SOCKET 存于 DAT_007ca228；connect/send/recv 共用
constexpr std::uintptr_t kAddr_LoginSocket = 0x007ca228;

// 【确定】硬编码登录服：inet_pton("47.99.69.51")，端口 htons(0x7EA)=2026
constexpr char kHardcodedLoginHost[] = "47.99.69.51";
constexpr uint16_t kHardcodedLoginPort = 2026;

// 【确定】etc/channel_info.etc 内 [server]…[/server] 由 parse_server_config_section 解析
// 【确定】net_create_socket_or_fail 不读该列表；连接仅用硬编码 IP/端口
// 【推断】服务器列表供 UI/选服显示，本 pass 未见 connect 消费

#pragma pack(push, 1)

// 【确定】登录发包布局（net_login_connect_and_spawn_thread @ 0x68dfc0）：
//   u32 be size(=0x25) | u32 be opcode(=0x14) | account[0xC] | password[0x11]
struct NetLoginPacket {
    uint32_t size_be;      // 【确定】htonl(总长)
    uint32_t opcode_be;    // 【确定】htonl(0x14)
    char account[0x0C];    // 【确定】
    char password[0x11];   // 【确定】
};
static_assert(sizeof(NetLoginPacket) == 0x25, "login packet size");

// 【确定】MAC 上报包（net_get_adapters_info → net_packet_send_opcode_with_account_payload）
//   size | opcode(0x183ee) | account[0xC] | mac_ascii[0x12]
struct NetMacReportPacketHdr {
    uint32_t size_be;
    uint32_t opcode_be;
    char account[0x0C];
    // 后随 param_3 字节 payload（MAC 字符串 0x12）
};

#pragma pack(pop)

// 【推断】收包后入队元素：指针指向整包缓冲（含 4 字节长度头）
// 队列对象 this 在 recv 路径上由 ECX 传入 FUN_0040d490 → FUN_0040e5d0（vector push）
// TODO(0x40d490/0x40e5d0): 确认全局队列对象地址与元素类型大小

struct NetSessionGlobals {
    char account[0x0C];   // @0x7ca204 【确定】
    char password[0x11];  // @0x7ca210 【确定】（存储区至 0x7ca220）
    SOCKET sock;          // @0x7ca228 【确定】
};

// ---- 函数（地址见 cpp / README）----

bool read_dnf_login_txt();                          // 0x68de00
bool net_wsa_startup();                             // 0x6a3140
void net_wsa_cleanup_wrapper();                     // 0x6a31a0
bool net_create_socket_or_fail(SOCKET* out, uint16_t port); // 0x6a55d0
bool net_login_connect_and_spawn_thread();          // 0x68dfc0
DWORD WINAPI net_socket_recv_thread_proc(LPVOID sock); // 0x4f2490
void net_get_adapters_info();                       // 0x68e170
void parse_server_config_section();                 // 0x5e7940

uint32_t net_packet_write_u32_be(void* dst, uint32_t host_val); // 0x6a34a0
uint32_t net_packet_write_bytes(void* dst, const void* src, uint32_t n); // 0x6a34d0
uint32_t net_packet_read_u32_be(uint32_t* out_host, const uint32_t* src_be); // 0x6a34f0
int net_socket_send_all(const void* buf, int len);  // 0x6a31b0
bool net_packet_send_opcode_with_account_payload(uint32_t opcode, const void* payload, int payload_len); // 0x6a3fe0
