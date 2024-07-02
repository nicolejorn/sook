
@{{BLOCK(bead_purse_bn_gfx)

@=======================================================================
@
@	bead_purse_bn_gfx, 16x16@4, 
@	+ palette 16 entries, not compressed
@	+ 4 tiles not compressed
@	Total size: 32 + 128 = 160
@
@	Time-stamp: 2024-07-02, 10:30:43
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global bead_purse_bn_gfxTiles		@ 128 unsigned chars
	.hidden bead_purse_bn_gfxTiles
bead_purse_bn_gfxTiles:
	.word 0xD0000000,0x0D000000,0x00D00000,0x000D0000,0x0000D000,0x00000D00,0x000000D0,0xDDDDDDDD
	.word 0x0000000D,0x000000D0,0x00000D00,0x0000D000,0x000D0000,0x00D00000,0x0D000000,0xDDDDDDDD
	.word 0x1DDDDDD1,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0x1DDDDDD1
	.word 0x1DDDDDD1,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0x1DDDDDD1

	.section .rodata
	.align	2
	.global bead_purse_bn_gfxPal		@ 32 unsigned chars
	.hidden bead_purse_bn_gfxPal
bead_purse_bn_gfxPal:
	.hword 0x0000,0x7E5F,0x0200,0x0210,0x4000,0x4010,0x4200,0x6318
	.hword 0x4210,0x001F,0x03E0,0x03FF,0x7C00,0x7C1F,0x7FE0,0x7FFF

@}}BLOCK(bead_purse_bn_gfx)
