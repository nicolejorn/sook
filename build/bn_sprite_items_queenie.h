#ifndef BN_SPRITE_ITEMS_QUEENIE_H
#define BN_SPRITE_ITEMS_QUEENIE_H

#include "bn_sprite_item.h"

//{{BLOCK(queenie_bn_gfx)

//======================================================================
//
//	queenie_bn_gfx, 32x32@8, 
//	+ palette 32 entries, not compressed
//	+ 16 tiles not compressed
//	Total size: 64 + 1024 = 1088
//
//	Time-stamp: 2024-06-01, 17:17:58
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_QUEENIE_BN_GFX_H
#define GRIT_QUEENIE_BN_GFX_H

#define queenie_bn_gfxTilesLen 1024
extern const bn::tile queenie_bn_gfxTiles[32];

#define queenie_bn_gfxPalLen 64
extern const bn::color queenie_bn_gfxPal[32];

#endif // GRIT_QUEENIE_BN_GFX_H

//}}BLOCK(queenie_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item queenie(sprite_shape_size(sprite_shape::SQUARE, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(queenie_bn_gfxTiles, 32), bpp_mode::BPP_8, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(queenie_bn_gfxPal, 32), bpp_mode::BPP_8, compression_type::NONE));
}

#endif

