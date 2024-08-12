#ifndef BN_SPRITE_ITEMS_BUDDY_KITE_H
#define BN_SPRITE_ITEMS_BUDDY_KITE_H

#include "bn_sprite_item.h"

//{{BLOCK(buddy_kite_bn_gfx)

//======================================================================
//
//	buddy_kite_bn_gfx, 64x64@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2024-08-11, 12:25:00
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BUDDY_KITE_BN_GFX_H
#define GRIT_BUDDY_KITE_BN_GFX_H

#define buddy_kite_bn_gfxTilesLen 2048
extern const bn::tile buddy_kite_bn_gfxTiles[64];

#define buddy_kite_bn_gfxPalLen 32
extern const bn::color buddy_kite_bn_gfxPal[16];

#endif // GRIT_BUDDY_KITE_BN_GFX_H

//}}BLOCK(buddy_kite_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item buddy_kite(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(buddy_kite_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(buddy_kite_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

