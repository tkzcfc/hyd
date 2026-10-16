# dep1.dll — 第三方库说明

## 身份认定

经 PE 版本资源与导出符号核实，本文件为 **FMOD Core API**（Firelight Technologies）的 32 位 Windows 构建，**不是**本游戏自研代码。

版本资源：`CompanyName=Firelight Technologies`，`InternalName=FMOD Core API`，`OriginalFilename=fmod.dll`，`FileVersion=2.2.7 (build 125130)`。

其它证据：

- 导出为 C++ 修饰名，集中在 `FMOD::System` / `Channel` / `Sound` / `DSP` / `Geometry` 等（约 1090 个导出）
- 内嵌路径形如 `...\core_api\src\fmod_codec_*.cpp`；编解码器字符串含 Vorbis/FSB/FLAC 等
- 导入 `MSACM32`、`WS2_32`、`ole32`、`WINMM`

## 与 game.exe 的关系

**`game.exe` 的 IAT 中没有导入 `dep1.dll` / `fmod*.dll` 的任何符号。**

主程序音频路径使用：

- `DSOUND.dll`（序号导入，通常为 `DirectSoundCreate`）
- `WINMM.dll!timeGetTime`

在 `game.exe` 字符串与导入表中未发现对 `dep1` / `fmod` 的 `LoadLibrary` / `GetProcAddress` 目标名。因此本 DLL 对本构建的主程序而言是**旁路/未链接的第三方依赖**（可能来自发行包或备选音频方案），**当前分析看不到 game.exe 对它的实际调用点**。

详见同目录 `imports.txt`、`exports.txt`。
