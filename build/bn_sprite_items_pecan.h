#ifndef BN_SPRITE_ITEMS_PECAN_H
#define BN_SPRITE_ITEMS_PECAN_H

#include "bn_sprite_item.h"

//{{BLOCK(pecan_bn_gfx)

//======================================================================
//
//	pecan_bn_gfx, 64x64@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2024-08-07, 10:17:39
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_PECAN_BN_GFX_H
#define GRIT_PECAN_BN_GFX_H

#define pecan_bn_gfxTilesLen 2048
extern const bn::tile pecan_bn_gfxTiles[64];

#define pecan_bn_gfxPalLen 32
extern const bn::color pecan_bn_gfxPal[16];

#endif // GRIT_PECAN_BN_GFX_H

//}}BLOCK(pecan_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item pecan(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(pecan_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(pecan_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

