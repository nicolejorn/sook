#ifndef BN_SPRITE_ITEMS_COMMON_CAR_H
#define BN_SPRITE_ITEMS_COMMON_CAR_H

#include "bn_sprite_item.h"

//{{BLOCK(common_car_bn_gfx)

//======================================================================
//
//	common_car_bn_gfx, 64x64@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2024-05-27, 18:49:05
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_COMMON_CAR_BN_GFX_H
#define GRIT_COMMON_CAR_BN_GFX_H

#define common_car_bn_gfxTilesLen 2048
extern const bn::tile common_car_bn_gfxTiles[64];

#define common_car_bn_gfxPalLen 32
extern const bn::color common_car_bn_gfxPal[16];

#endif // GRIT_COMMON_CAR_BN_GFX_H

//}}BLOCK(common_car_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item common_car(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(common_car_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(common_car_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

