#ifndef BN_REGULAR_BG_ITEMS_SOOK_ROOM_H
#define BN_REGULAR_BG_ITEMS_SOOK_ROOM_H

#include "bn_regular_bg_item.h"

//{{BLOCK(sook_room_bn_gfx)

//======================================================================
//
//	sook_room_bn_gfx, 256x256@4, 
//	+ palette 16 entries, not compressed
//	+ 4 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 32 + 128 + 2048 = 2208
//
//	Time-stamp: 2024-07-01, 18:20:25
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_SOOK_ROOM_BN_GFX_H
#define GRIT_SOOK_ROOM_BN_GFX_H

#define sook_room_bn_gfxTilesLen 128
extern const bn::tile sook_room_bn_gfxTiles[4];

#define sook_room_bn_gfxMapLen 2048
extern const bn::regular_bg_map_cell sook_room_bn_gfxMap[1024];

#define sook_room_bn_gfxPalLen 32
extern const bn::color sook_room_bn_gfxPal[16];

#endif // GRIT_SOOK_ROOM_BN_GFX_H

//}}BLOCK(sook_room_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item sook_room(
            regular_bg_tiles_item(span<const tile>(sook_room_bn_gfxTiles, 4), bpp_mode::BPP_4, compression_type::NONE), 
            bg_palette_item(span<const color>(sook_room_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE),
            regular_bg_map_item(sook_room_bn_gfxMap[0], size(32, 32), compression_type::NONE, 1, false));
}

#endif

