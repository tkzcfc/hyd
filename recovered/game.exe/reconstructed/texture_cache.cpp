#include "texture_cache.h"

#include <cstdio>
#include <cstring>
#include <d3dx9.h>

extern void* FUN_006f191d(size_t);
extern void  FUN_006f1902(void*);
extern void  FUN_00428040(void*); // npk_img_texture_slot_store 实际调用

void npk_img_texture_slot_store(TextureSlot* slot) {
  // 【确定】0x00426E60 → FUN_00428040(slot)
  FUN_00428040(slot);
}

/**
 * 【确定】原名 d3d9_texture_from_memory @ 0x005106C0
 * 读盘后 D3DXCreateTextureFromFileInMemory；成功则填写宽高。
 */
TextureSlot* d3d9_texture_from_file_via_memory(IDirect3DDevice9* device,
                                               const char* path) {
  FILE* fp = std::fopen(path, "rb");
  if (!fp) return nullptr;
  std::fseek(fp, 0, SEEK_END);
  long sz = std::ftell(fp);
  std::fseek(fp, 0, SEEK_SET);
  void* buf = FUN_006f191d(static_cast<size_t>(sz));
  std::memset(buf, 0, static_cast<size_t>(sz));
  std::fread(buf, 1, static_cast<size_t>(sz), fp);
  std::fclose(fp);

  IDirect3DTexture9* tex = nullptr;
  HRESULT hr = D3DXCreateTextureFromFileInMemory(device, buf, static_cast<UINT>(sz), &tex);
  FUN_006f1902(buf);
  if (FAILED(hr) || !tex) return nullptr;

  // TODO(0x005106C0): 完整 TextureSlot 构造与 GetLevelDesc 字段映射
  auto* slot = new TextureSlot{};
  slot->texture = tex;
  return slot;
}
