//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef IW4

#include <Windows.h>

namespace ReflectivePE
{
namespace Patches
{

typedef int(__cdecl*       DB_GetXAssetSizeHandler_t)();
DB_GetXAssetSizeHandler_t* DB_GetXAssetSizeHandlers = reinterpret_cast<DB_GetXAssetSizeHandler_t*>(0x799488);

void XAssetPatch(const int type, const unsigned int size)
{
  void**  DB_XAssetPool  = reinterpret_cast<void**>(0x007998A8);
  unsigned int* g_poolSize = reinterpret_cast<unsigned*>(0x007995E8);
  DB_XAssetPool[type] = malloc(size * DB_GetXAssetSizeHandlers[type]());
  g_poolSize[type] = size;
}

void main()
{
  FreeConsole(); // Free the console allocated 1.0.177
  XAssetPatch(0x1C, 2400); // Increase allocation for the "weapon" asset type
  memset(reinterpret_cast<void*>(0x60BB58), 0x90, 11); // Show external developer's console
  DeleteFile("zone/english/mp_playlists.ff"); // Delete mp_playlists.ff automatic downloads
}

} // namespace Patches
} // namespace ReflectivePE

#endif
