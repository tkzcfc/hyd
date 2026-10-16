#pragma once
// IMG → IDirect3DTexture9 缓存相关（自 game.exe 恢复）

#include "npk_img.h"
#include <d3d9.h>

/**
 * 【确定】单帧上传后的槽位字段（d3d9_texture_from_memory / open_path 路径）：
 * 伪代码把 IDirect3DTexture9* 放在对象 +0，宽高写入 +0x0C/+0x10 等。
 * 【推断】与 UI 精灵共用同一「纹理描述」结构。
 */
struct TextureSlot {
  IDirect3DTexture9* texture; // 【确定】+0x00
  int32_t key_x;              // 【推断】+0x04  open_path 里部分字段来自帧 key
  int32_t key_y;              // 【推断】+0x08
  int32_t width;              // 【确定】GetLevelDesc 后写入（from_memory 路径 +0x0C）
  int32_t height;             // 【确定】+0x10
  int32_t max_w;              // 【推断】+0x14
  int32_t max_h;              // 【推断】+0x18
};

/** 【确定】按帧索引取 ImgFrameRuntime* — npk_img_frame_ptr_at @ 0x004BCF10 */
inline ImgFrameRuntime* npk_img_frame_ptr_at(ImgFrameRuntime** base, int index) {
  return reinterpret_cast<ImgFrameRuntime*>(
      reinterpret_cast<uint8_t*>(*base) + index * 0x28);
}

/** 【确定】将 TextureSlot 推入容器 — npk_img_texture_slot_store @ 0x00426E60 */
void npk_img_texture_slot_store(TextureSlot* slot);

/**
 * 【确定】d3d9_texture_from_memory @ 0x005106C0
 * 实际：fopen 路径 → 读全文件 → D3DXCreateTextureFromFileInMemory。
 * 用于 DDS/普通图片文件，不是 NPK 帧路径。
 */
TextureSlot* d3d9_texture_from_file_via_memory(IDirect3DDevice9* device,
                                               const char* path);
