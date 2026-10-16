# hyd — DNF 同人端 game.exe 反编译参考代码

> **重要说明**：本仓库内容是对已编译的 `game.exe`（32 位 MSVC C++ / DirectX 9，读取 Dungeon & Fighter 风格 NPK/IMG 资源；PDB 路径 `F:\DNF1126\Release\DNF.pdb`）做**静态反编译**得到的 C 伪代码，仅作为**重写工程时的参考**。
> 它**不是**原始源码，也无法精确还原原始源码：原始函数名、变量名、类型、类结构、注释均已丢失；编译器优化（内联、合并）导致伪代码与手写代码差异很大；伪代码不能直接编译。

## 目录结构

```
README.md                  ← 本文件（仓库说明）
.gitignore
recovered/
  README.md                ← 详细结构分析（入口/WinMain、主循环、D3D9 渲染、NPK/IMG、输入、声音、网络登录、DLL 关系、关键函数表、限制）
  game.exe/                ← 用户自研主程序
    decompiled/*.c         ← 全部函数的伪代码，按功能域分文件；有证据的放进命名模块，
                              其余按地址区间放进 unclassified_*.c（超长文件已分 part）
    functions.csv          ← 地址, 名称, 大小, 所在文件, 是否经分析重命名
    renames.md             ← 重命名清单及证据/置信度
    imports.txt / exports.txt / strings.txt
    README.md
  dep1.dll/                ← 第三方库（FMOD Core API）：仅 imports/exports 与用法说明，不含反编译代码
  dep2.dll/                ← 第三方库（Microsoft D3DX9，game.exe 以 d3dx9_43.dll 名导入）：同上
```

## 如何使用

1. 先读 `recovered/README.md` 了解整体架构与关键函数地址。
2. 用 `renames.md` / `functions.csv` 按地址或名称查到函数所在 `.c` 文件，每个函数前的注释标有地址。
3. `FUN_xxxxxxxx` 为未识别函数（Ghidra 默认名）；`unclassified_*.c` 中的函数未做功能归类。

## 生成方式

- Ghidra 12.1.4（REA 逆向 MCP 服务器做定向分析/重命名，通过 Cursor CLI 驱动）+ Ghidra analyzeHeadless 全量反编译脚本。
- 本仓库不包含任何二进制文件（exe/dll）、Ghidra 工程或压缩包。
