#ifndef BN_AFFINE_BG_ITEMS_HAHA_HOUSE_H
#define BN_AFFINE_BG_ITEMS_HAHA_HOUSE_H

#include "bn_affine_bg_item.h"

//{{BLOCK(haha_house_bn_gfx)

//======================================================================
//
//	haha_house_bn_gfx, 512x256@8, 
//	+ palette 16 entries, not compressed
//	+ 12 tiles (t reduced) not compressed
//	+ affine map, not compressed, 64x32 
//	Total size: 32 + 768 + 2048 = 2848
//
//	Time-stamp: 2024-07-08, 15:51:53
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_HAHA_HOUSE_BN_GFX_H
#define GRIT_HAHA_HOUSE_BN_GFX_H

#define haha_house_bn_gfxTilesLen 768
extern const bn::tile haha_house_bn_gfxTiles[24];

#define haha_house_bn_gfxMapLen 2048
extern const bn::affine_bg_map_cell haha_house_bn_gfxMap[2048];

#define haha_house_bn_gfxPalLen 32
extern const bn::color haha_house_bn_gfxPal[16];

#endif // GRIT_HAHA_HOUSE_BN_GFX_H

//}}BLOCK(haha_house_bn_gfx)

namespace bn::affine_bg_items
{
    constexpr inline affine_bg_item haha_house(
            affine_bg_tiles_item(span<const tile>(haha_house_bn_gfxTiles, 24), compression_type::NONE), 
            bg_palette_item(span<const color>(haha_house_bn_gfxPal, 16), bpp_mode::BPP_8, compression_type::NONE),
            affine_bg_map_item(haha_house_bn_gfxMap[0], size(64, 32), compression_type::NONE, 1, true));
}

#endif

