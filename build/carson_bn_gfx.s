
@{{BLOCK(carson_bn_gfx)

@=======================================================================
@
@	carson_bn_gfx, 32x32@4, 
@	+ palette 16 entries, not compressed
@	+ 16 tiles not compressed
@	Total size: 32 + 512 = 544
@
@	Time-stamp: 2024-07-08, 15:51:53
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global carson_bn_gfxTiles		@ 512 unsigned chars
	.hidden carson_bn_gfxTiles
carson_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x11100000,0x00010000,0x00001100,0x00000100,0x00000010,0x00000001,0x00000001,0x11111111
	.word 0x00000111,0x00001000,0x00110000,0x00100000,0x01000000,0x10000000,0x10000000,0x11111111
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000001,0x00000001,0x00000001,0x00000011,0x00000101,0x00001101,0x00010001,0x11111111
	.word 0x10000000,0x10000000,0x10000000,0x11000000,0x10100000,0x10110000,0x10001000,0x11111111
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x11100000,0x00010000,0x00001100,0x00000100,0x00000010,0x00000001,0x00000001,0x00000001
	.word 0x00000111,0x00001000,0x00110000,0x00100000,0x01000000,0x10000000,0x10000000,0x10000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000001,0x00000001,0x00000001,0x00000010,0x00000100,0x00001100,0x00010000,0x11100000
	.word 0x10000000,0x10000000,0x10000000,0x01000000,0x00100000,0x00110000,0x00001000,0x00000111
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global carson_bn_gfxPal		@ 32 unsigned chars
	.hidden carson_bn_gfxPal
carson_bn_gfxPal:
	.hword 0x03E0,0x0000,0x0200,0x0210,0x4000,0x4010,0x4200,0x6318
	.hword 0x4210,0x001F,0x03E0,0x03FF,0x7C00,0x7C1F,0x7FE0,0x7FFF

@}}BLOCK(carson_bn_gfx)
