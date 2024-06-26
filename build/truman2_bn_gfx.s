
@{{BLOCK(truman2_bn_gfx)

@=======================================================================
@
@	truman2_bn_gfx, 32x32@4, 
@	+ palette 16 entries, not compressed
@	+ 16 tiles not compressed
@	Total size: 32 + 512 = 544
@
@	Time-stamp: 2024-05-30, 17:39:47
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global truman2_bn_gfxTiles		@ 512 unsigned chars
	.hidden truman2_bn_gfxTiles
truman2_bn_gfxTiles:
	.word 0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA
	.word 0x000AAAAA,0xFFF0AAAA,0xFFFF00AA,0xFFFFF0AA,0xFFFFFF0A,0xFFFFFFF0,0xFFFFFFF0,0xFFFFFFF0
	.word 0xAAAAA000,0xAAAA0FFF,0xAA00FFFF,0xAA0FFFFF,0xA0FFFFFF,0x0FFFFFFF,0x0FFFFFFF,0x0FFFFFFF
	.word 0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA
	.word 0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA
	.word 0xFFFFFFF0,0xFFFFFFF0,0xFFFFFFF0,0xFFFFFF0A,0xFFFFF0AA,0xFFFF00AA,0xFFF0AAAA,0x000AAAAA
	.word 0x0FFFFFFF,0x0FFFFFFF,0x0FFFFFFF,0xA0FFFFFF,0xAA0FFFFF,0xAA00FFFF,0xAAAA0FFF,0xAAAAA000
	.word 0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA

	.word 0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA
	.word 0x000AAAAA,0x0000AAAA,0x000000AA,0x000000AA,0x0000000A,0x00000000,0x00000000,0x00000000
	.word 0xAAAAA000,0xAAAA0000,0xAA000000,0xAA000000,0xA0000000,0x00000000,0x00000000,0x00000000
	.word 0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA
	.word 0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA
	.word 0x00000000,0x00000000,0x00000000,0x0000000A,0x000000AA,0x000000AA,0x0000AAAA,0x000AAAAA
	.word 0x00000000,0x00000000,0x00000000,0xA0000000,0xAA000000,0xAA000000,0xAAAA0000,0xAAAAA000
	.word 0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA,0xAAAAAAAA

	.section .rodata
	.align	2
	.global truman2_bn_gfxPal		@ 32 unsigned chars
	.hidden truman2_bn_gfxPal
truman2_bn_gfxPal:
	.hword 0x0000,0x0010,0x0200,0x0210,0x4000,0x4010,0x4200,0x6318
	.hword 0x4210,0x001F,0x03E0,0x03FF,0x7C00,0x7C1F,0x7FE0,0x7FFF

@}}BLOCK(truman2_bn_gfx)
