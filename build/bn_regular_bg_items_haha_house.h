#ifndef BN_REGULAR_BG_ITEMS_HAHA_HOUSE_H
#define BN_REGULAR_BG_ITEMS_HAHA_HOUSE_H

#include "bn_regular_bg_item.h"

//{{BLOCK(haha_house_bn_gfx)

//======================================================================
//
//	haha_house_bn_gfx, 512x256@4, 
//	+ palette 16 entries, not compressed
//	+ 11 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x32 
//	Total size: 32 + 352 + 4096 = 4480
//
//	Time-stamp: 2024-07-08, 15:58:39
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_HAHA_HOUSE_BN_GFX_H
#define GRIT_HAHA_HOUSE_BN_GFX_H

#define haha_house_bn_gfxTilesLen 352
extern const bn::tile haha_house_bn_gfxTiles[11];

#define haha_house_bn_gfxMapLen 4096
extern const bn::regular_bg_map_cell haha_house_bn_gfxMap[2048];

#define haha_house_bn_gfxPalLen 32
extern const bn::color haha_house_bn_gfxPal[16];

#endif // GRIT_HAHA_HOUSE_BN_GFX_H

//}}BLOCK(haha_house_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item haha_house(
            regular_bg_tiles_item(span<const tile>(haha_house_bn_gfxTiles, 11), bpp_mode::BPP_4, compression_type::NONE), 
            bg_palette_item(span<const color>(haha_house_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE),
            regular_bg_map_item(haha_house_bn_gfxMap[0], size(64, 32), compression_type::NONE, 1, false));
}

#endif

