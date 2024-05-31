
@{{BLOCK(truman_bn_gfx)

@=======================================================================
@
@	truman_bn_gfx, 64x64@4, 
@	+ palette 16 entries, not compressed
@	+ 64 tiles not compressed
@	Total size: 32 + 2048 = 2080
@
@	Time-stamp: 2024-05-30, 17:39:47
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global truman_bn_gfxTiles		@ 2048 unsigned chars
	.hidden truman_bn_gfxTiles
truman_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x60000000,0x06600000,0x00060000,0x00060000,0x00006000
	.word 0x66000000,0x00666600,0x00000066,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000066,0x00666600,0x66000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000006,0x00000660,0x00006000,0x00006000,0x00060000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000600,0x00000600,0x00000060,0x00000060,0x00000060,0x00000006,0x00000006,0x00000006
	.word 0x00000006,0x00000006,0x00000006,0x00000006,0x00000006,0x00000006,0x00000006,0x00000006
	.word 0x60000000,0x60000000,0x60000000,0x60000000,0x60000000,0x60000000,0x60000000,0x60000000
	.word 0x00600000,0x00600000,0x06000000,0x06000000,0x06000000,0x60000000,0x60000000,0x60000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000006,0x00000006,0x00000006,0x00000060,0x00000060,0x00000060,0x00000600,0x00000600
	.word 0x00000006,0x00000006,0x00000006,0x00000006,0x00000006,0x00000006,0x00000006,0x00000006
	.word 0x60000000,0x60000000,0x60000000,0x60000000,0x60000000,0x60000000,0x60000000,0x60000000
	.word 0x60000000,0x60000000,0x60000000,0x06000000,0x06000000,0x06000000,0x00600000,0x00600000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00006000,0x00060000,0x00060000,0x06600000,0x60000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000066,0x00666600,0x66600000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x66000000,0x00666600,0x00000066
	.word 0x00060000,0x00006000,0x00006000,0x00000660,0x00000006,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x60000000,0x06000000,0x00660000,0x00006000,0x00006000,0x00000600,0x00000060
	.word 0x00066660,0x00000006,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00666600,0x66000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000006,0x00000660,0x00006000,0x00006000,0x00060000,0x00600000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x60000000,0x60000000,0x60000000
	.word 0x00000060,0x00000006,0x00000006,0x00000006,0x00000006,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00600000,0x06000000,0x06000000,0x06000000,0x06000000,0x60000000,0x60000000,0x60000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x60000000,0x60000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000006,0x00000006,0x00000006,0x00000006,0x00000060,0x00000060
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x60000000,0x60000000,0x06000000,0x06000000,0x06000000,0x06000000,0x00600000,0x00600000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000600,0x00006000,0x00006000,0x00660000,0x06000000,0x60000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000006,0x00066660,0x66600000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x66000000,0x00666600,0x00000066
	.word 0x00060000,0x00006000,0x00006000,0x00000660,0x00000006,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global truman_bn_gfxPal		@ 32 unsigned chars
	.hidden truman_bn_gfxPal
truman_bn_gfxPal:
	.hword 0x03E0,0x4DEB,0x562C,0x5A4D,0x025A,0x027B,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(truman_bn_gfx)
