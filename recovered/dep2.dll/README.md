# dep2.dll — 第三方库说明

## 身份认定

经 PE 版本资源与导出符号核实，本文件为 **Microsoft D3DX9** 辅助库的 32 位构建，**不是**本游戏自研代码。

版本资源：`CompanyName=Microsoft Corporation`，`FileDescription=Direct3D 9 Extensions`，`InternalName/OriginalFilename=D3DX9D.dll`，`FileVersion=9.29.952.3111`。

其它证据：导出含 `D3DXCreateTexture`、`D3DXCreateSprite`、`D3DXCompileShader`、`D3DXMatrix*` 等（约 329 个）；内嵌 `Software\Microsoft\Direct3D`、`d3d9.dll` 等。

> 说明：磁盘文件名是 `dep2.dll`，但 `game.exe` IAT 按 **`d3dx9_43.dll`** 导入。部署时需提供该名（或旁加载映射）。版本资源显示内部名为 `D3DX9D.dll`（带 D 的调试变体命名），功能上仍是 D3DX9 导出集。

## 与 game.exe 的关系（IAT 交叉核对）

`game.exe` **静态导入** `d3dx9_43.dll` 的下列符号；它们均存在于本 `dep2.dll` 的导出表中：

| game.exe 导入符号 | 用途（推断） |
|-------------------|--------------|
| `D3DXCreateSprite` | 2D 精灵批渲染 |
| `D3DXCreateTexture` | 创建纹理 |
| `D3DXCreateTextureFromFileInMemory` | 从内存（如 IMG/解码后像素）建纹理 |
| `D3DXCreateFontIndirectA` | 字体 |
| `D3DXMatrixTransformation2D` | 2D 变换矩阵 |
| `D3DXMatrixRotationZ` | Z 轴旋转 |
| `D3DXMatrixMultiply` | 矩阵乘法 |
| `D3DXMatrixTranslation` | 平移 |
| `D3DXMatrixScaling` | 缩放 |

调用方式：通过 PE 导入地址表（IAT）直接调用，**不是** `LoadLibrary`/`GetProcAddress`。

`game.exe` 中已定位的主要调用点（见 `game.exe/renames.md`）：

| 地址 | 函数名 | 使用的 D3DX 符号 |
|------|--------|------------------|
| `0x004b6120` | `d3d9_create_device_bootstrap` | `D3DXCreateSprite`（同函数内还调用 `d3d9!Direct3DCreate9`） |
| `0x005106c0` | `d3d9_texture_from_memory` | `D3DXCreateTextureFromFileInMemory` |

其余矩阵/字体导入（`D3DXMatrix*`、`D3DXCreateFontIndirectA`、`D3DXCreateTexture`）由渲染/UI 路径经 IAT 调用；未全部单独重命名。

`game.exe` 另直接导入 `d3d9.dll!Direct3DCreate9`（设备创建，不在本 DLL）。

详见同目录 `imports.txt`、`exports.txt`。
