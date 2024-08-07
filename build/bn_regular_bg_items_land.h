#ifndef BN_REGULAR_BG_ITEMS_LAND_H
#define BN_REGULAR_BG_ITEMS_LAND_H

#include "bn_regular_bg_item.h"

//{{BLOCK(land_bn_gfx)

//======================================================================
//
//	land_bn_gfx, 256x256@8, 
//	+ palette 32 entries, not compressed
//	+ 5 tiles (t|f reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 64 + 320 + 2048 = 2432
//
//	Time-stamp: 2024-08-07, 09:43:47
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_LAND_BN_GFX_H
#define GRIT_LAND_BN_GFX_H

#define land_bn_gfxTilesLen 320
extern const bn::tile land_bn_gfxTiles[10];

#define land_bn_gfxMapLen 2048
extern const bn::regular_bg_map_cell land_bn_gfxMap[1024];

#define land_bn_gfxPalLen 64
extern const bn::color land_bn_gfxPal[32];

#endif // GRIT_LAND_BN_GFX_H

//}}BLOCK(land_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item land(
            regular_bg_tiles_item(span<const tile>(land_bn_gfxTiles, 10), bpp_mode::BPP_8, compression_type::NONE), 
            bg_palette_item(span<const color>(land_bn_gfxPal, 32), bpp_mode::BPP_8, compression_type::NONE),
            regular_bg_map_item(land_bn_gfxMap[0], size(32, 32), compression_type::NONE, 1, false));
}

#endif

