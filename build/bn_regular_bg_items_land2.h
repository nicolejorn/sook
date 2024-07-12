#ifndef BN_REGULAR_BG_ITEMS_LAND2_H
#define BN_REGULAR_BG_ITEMS_LAND2_H

#include "bn_regular_bg_item.h"

//{{BLOCK(land2_bn_gfx)

//======================================================================
//
//	land2_bn_gfx, 256x256@4, 
//	+ palette 16 entries, not compressed
//	+ 6 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 32 + 192 + 2048 = 2272
//
//	Time-stamp: 2024-07-11, 16:51:55
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_LAND2_BN_GFX_H
#define GRIT_LAND2_BN_GFX_H

#define land2_bn_gfxTilesLen 192
extern const bn::tile land2_bn_gfxTiles[6];

#define land2_bn_gfxMapLen 2048
extern const bn::regular_bg_map_cell land2_bn_gfxMap[1024];

#define land2_bn_gfxPalLen 32
extern const bn::color land2_bn_gfxPal[16];

#endif // GRIT_LAND2_BN_GFX_H

//}}BLOCK(land2_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item land2(
            regular_bg_tiles_item(span<const tile>(land2_bn_gfxTiles, 6), bpp_mode::BPP_4, compression_type::NONE), 
            bg_palette_item(span<const color>(land2_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE),
            regular_bg_map_item(land2_bn_gfxMap[0], size(32, 32), compression_type::NONE, 1, false));
}

#endif

