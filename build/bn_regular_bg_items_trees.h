#ifndef BN_REGULAR_BG_ITEMS_TREES_H
#define BN_REGULAR_BG_ITEMS_TREES_H

#include "bn_regular_bg_item.h"

//{{BLOCK(trees_bn_gfx)

//======================================================================
//
//	trees_bn_gfx, 256x256@4, 
//	+ palette 16 entries, not compressed
//	+ 69 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 32 + 2208 + 2048 = 4288
//
//	Time-stamp: 2024-08-07, 10:20:47
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_TREES_BN_GFX_H
#define GRIT_TREES_BN_GFX_H

#define trees_bn_gfxTilesLen 2208
extern const bn::tile trees_bn_gfxTiles[69];

#define trees_bn_gfxMapLen 2048
extern const bn::regular_bg_map_cell trees_bn_gfxMap[1024];

#define trees_bn_gfxPalLen 32
extern const bn::color trees_bn_gfxPal[16];

#endif // GRIT_TREES_BN_GFX_H

//}}BLOCK(trees_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item trees(
            regular_bg_tiles_item(span<const tile>(trees_bn_gfxTiles, 69), bpp_mode::BPP_4, compression_type::NONE), 
            bg_palette_item(span<const color>(trees_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE),
            regular_bg_map_item(trees_bn_gfxMap[0], size(32, 32), compression_type::NONE, 1, false));
}

#endif

