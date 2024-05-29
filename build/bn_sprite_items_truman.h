#ifndef BN_SPRITE_ITEMS_TRUMAN_H
#define BN_SPRITE_ITEMS_TRUMAN_H

#include "bn_sprite_item.h"

//{{BLOCK(truman_bn_gfx)

//======================================================================
//
//	truman_bn_gfx, 64x64@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2024-05-29, 15:53:46
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_TRUMAN_BN_GFX_H
#define GRIT_TRUMAN_BN_GFX_H

#define truman_bn_gfxTilesLen 2048
extern const bn::tile truman_bn_gfxTiles[64];

#define truman_bn_gfxPalLen 32
extern const bn::color truman_bn_gfxPal[16];

#endif // GRIT_TRUMAN_BN_GFX_H

//}}BLOCK(truman_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item truman(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(truman_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(truman_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

