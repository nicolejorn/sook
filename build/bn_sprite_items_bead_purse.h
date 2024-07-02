#ifndef BN_SPRITE_ITEMS_BEAD_PURSE_H
#define BN_SPRITE_ITEMS_BEAD_PURSE_H

#include "bn_sprite_item.h"

//{{BLOCK(bead_purse_bn_gfx)

//======================================================================
//
//	bead_purse_bn_gfx, 16x16@4, 
//	+ palette 16 entries, not compressed
//	+ 4 tiles not compressed
//	Total size: 32 + 128 = 160
//
//	Time-stamp: 2024-07-02, 10:30:43
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BEAD_PURSE_BN_GFX_H
#define GRIT_BEAD_PURSE_BN_GFX_H

#define bead_purse_bn_gfxTilesLen 128
extern const bn::tile bead_purse_bn_gfxTiles[4];

#define bead_purse_bn_gfxPalLen 32
extern const bn::color bead_purse_bn_gfxPal[16];

#endif // GRIT_BEAD_PURSE_BN_GFX_H

//}}BLOCK(bead_purse_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item bead_purse(sprite_shape_size(sprite_shape::SQUARE, sprite_size::NORMAL), 
            sprite_tiles_item(span<const tile>(bead_purse_bn_gfxTiles, 4), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(bead_purse_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

