#ifndef BN_SPRITE_ITEMS_TRUMAN2_H
#define BN_SPRITE_ITEMS_TRUMAN2_H

#include "bn_sprite_item.h"

//{{BLOCK(truman2_bn_gfx)

//======================================================================
//
//	truman2_bn_gfx, 32x32@4, 
//	+ palette 16 entries, not compressed
//	+ 16 tiles not compressed
//	Total size: 32 + 512 = 544
//
//	Time-stamp: 2024-07-01, 18:30:56
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_TRUMAN2_BN_GFX_H
#define GRIT_TRUMAN2_BN_GFX_H

#define truman2_bn_gfxTilesLen 512
extern const bn::tile truman2_bn_gfxTiles[16];

#define truman2_bn_gfxPalLen 32
extern const bn::color truman2_bn_gfxPal[16];

#endif // GRIT_TRUMAN2_BN_GFX_H

//}}BLOCK(truman2_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item truman2(sprite_shape_size(sprite_shape::SQUARE, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(truman2_bn_gfxTiles, 16), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(truman2_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

