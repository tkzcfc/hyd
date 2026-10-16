// 网络包头与 opcode 表（静态分析恢复）
#pragma once

#include <cstdint>

// ---------------------------------------------------------------------------
// 包头【确定】
// 所有经 net_packet_write_field / net_packet_read_u32_be 的字段均为 **网络字节序**
// （实现：Ordinal_8 = htonl，Ordinal_14 = ntohl；WS2_32 按序号导入）。
//
// 通用发送布局（多数游戏包）：
//   +0x00  u32 size_be     整包字节数（含本字段）
//   +0x04  u32 opcode_be   命令字
//   +0x08  char account[12] 当前登录账号（DAT_007ca204）
//   其后为 opcode 相关字段；若有玩家会话则常跟 u32 player_id @ session+0x1e8
//
// 登录包（opcode 0x14）无 player_id，账号后直接跟密码。
// 未见独立 seq / checksum / 加密例程挂在 write/send 路径上【确定：本路径无】。
// ---------------------------------------------------------------------------

namespace net_opcode {
// 登录相关【确定】
constexpr uint32_t kLogin            = 0x14;     // WinMain 连接后首包
constexpr uint32_t kMacAdapterReport = 0x183ee;  // GetAdaptersInfo 后上报 MAC

// 其余 opcode 由各 net_packet_send_* 构造器的第一参数传入；完整表见 README
// （本 pass 从 write_field 调用点收集，见 work_ghidra/out3）
}  // namespace net_opcode

// Winsock 按序号（本映像 IAT）【确定】
// Ordinal_3  closesocket
// Ordinal_4  connect
// Ordinal_8  htonl
// Ordinal_9  htons
// Ordinal_14 ntohl
// Ordinal_16 recv
// Ordinal_19 send
// Ordinal_23 socket
// Ordinal_111 WSAGetLastError
// Ordinal_115 WSAStartup
// Ordinal_116 WSACleanup
