#ifndef BN_SPRITE_ITEMS_SOOK_H
#define BN_SPRITE_ITEMS_SOOK_H

#include "bn_sprite_item.h"

//{{BLOCK(sook_bn_gfx)

//======================================================================
//
//	sook_bn_gfx, 32x32@8, 
//	+ palette 256 entries, not compressed
//	+ 16 tiles not compressed
//	Total size: 512 + 1024 = 1536
//
//	Time-stamp: 2024-05-25, 20:00:00
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_SOOK_BN_GFX_H
#define GRIT_SOOK_BN_GFX_H

#define sook_bn_gfxTilesLen 1024
extern const bn::tile sook_bn_gfxTiles[32];

#define sook_bn_gfxPalLen 512
extern const bn::color sook_bn_gfxPal[256];

#endif // GRIT_SOOK_BN_GFX_H

//}}BLOCK(sook_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item sook(sprite_shape_size(sprite_shape::SQUARE, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(sook_bn_gfxTiles, 32), bpp_mode::BPP_8, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(sook_bn_gfxPal, 256), bpp_mode::BPP_8, compression_type::NONE));
}

#endif

