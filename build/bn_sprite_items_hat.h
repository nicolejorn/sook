#ifndef BN_SPRITE_ITEMS_HAT_H
#define BN_SPRITE_ITEMS_HAT_H

#include "bn_sprite_item.h"

//{{BLOCK(hat_bn_gfx)

//======================================================================
//
//	hat_bn_gfx, 32x16@4, 
//	+ palette 16 entries, not compressed
//	+ 8 tiles not compressed
//	Total size: 32 + 256 = 288
//
//	Time-stamp: 2024-08-14, 12:12:24
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_HAT_BN_GFX_H
#define GRIT_HAT_BN_GFX_H

#define hat_bn_gfxTilesLen 256
extern const bn::tile hat_bn_gfxTiles[8];

#define hat_bn_gfxPalLen 32
extern const bn::color hat_bn_gfxPal[16];

#endif // GRIT_HAT_BN_GFX_H

//}}BLOCK(hat_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item hat(sprite_shape_size(sprite_shape::WIDE, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(hat_bn_gfxTiles, 8), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(hat_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

