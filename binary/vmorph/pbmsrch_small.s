	.file	1 "pbmsrch_small.c"
	.section .mdebug.abi64
	.previous
	.nan	2008
	.module	fp=64
	.module	oddspreg
	.module	arch=mips64r6
	.text
	.local	table
	.comm	table,2048,8
	.local	len
	.comm	len,8,8
	.local	findme
	.comm	findme,8,8
	.align	2
	.globl	init_search
	.set	nomips16
	.set	nomicromips
	.ent	init_search
	.type	init_search, @function
init_search:
	.frame	$sp,48,$31		# vars= 32, regs= 1/0, args= 0, gp= 0
	.mask	0x80000000,-8
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	daddiu	$sp,$sp,-48
	sd	$31,40($sp)
	sd	$4,16($sp)
	ld	$4,16($sp)
	balc	strlen
	move	$3,$2
	lui	$2,%highest(len)
	daddiu	$2,$2,%higher(len)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(len)
	dsll	$2,$2,16
	sd	$3,%lo(len)($2)
	sd	$0,0($sp)
	bc	.L2
.L3:
	lui	$2,%highest(len)
	daddiu	$2,$2,%higher(len)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(len)
	dsll	$2,$2,16
	ld	$3,%lo(len)($2)
	lui	$2,%highest(table)
	daddiu	$2,$2,%higher(table)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(table)
	dsll	$2,$2,16
	ld	$4,0($sp)
	dsll	$4,$4,3
	daddiu	$2,$2,%lo(table)
	daddu	$2,$4,$2
	sd	$3,0($2)
	ld	$2,0($sp)
	daddiu	$2,$2,1
	sd	$2,0($sp)
.L2:
	ld	$2,0($sp)
	li	$3,255			# 0xff
	bgeuc	$3,$2,.L3
	sd	$0,0($sp)
	bc	.L4
.L5:
	lui	$2,%highest(len)
	daddiu	$2,$2,%higher(len)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(len)
	dsll	$2,$2,16
	ld	$3,%lo(len)($2)
	ld	$2,0($sp)
	dsubu	$2,$3,$2
	ld	$4,16($sp)
	ld	$3,0($sp)
	daddu	$3,$4,$3
	lb	$3,0($3)
	andi	$3,$3,0x00ff
	move	$4,$3
	daddiu	$3,$2,-1
	lui	$2,%highest(table)
	daddiu	$2,$2,%higher(table)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(table)
	dsll	$2,$2,16
	dsll	$4,$4,3
	daddiu	$2,$2,%lo(table)
	daddu	$2,$4,$2
	sd	$3,0($2)
	ld	$2,0($sp)
	daddiu	$2,$2,1
	sd	$2,0($sp)
.L4:
	lui	$2,%highest(len)
	daddiu	$2,$2,%higher(len)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(len)
	dsll	$2,$2,16
	ld	$2,%lo(len)($2)
	ld	$3,0($sp)
	bltuc	$3,$2,.L5
	lui	$2,%highest(findme)
	daddiu	$2,$2,%higher(findme)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(findme)
	dsll	$2,$2,16
	ld	$3,16($sp)
	sd	$3,%lo(findme)($2)
	nop
	ld	$31,40($sp)
	daddiu	$sp,$sp,48
	jrc	$31
	.set	macro
	.set	reorder
	.end	init_search
	.size	init_search, .-init_search
	.align	2
	.globl	strsearch
	.set	nomips16
	.set	nomicromips
	.ent	strsearch
	.type	strsearch, @function
strsearch:
	.frame	$sp,64,$31		# vars= 32, regs= 3/0, args= 0, gp= 0
	.mask	0x80030000,-8
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	daddiu	$sp,$sp,-64
	sd	$31,56($sp)
	sd	$17,48($sp)
	sd	$16,40($sp)
	sd	$4,16($sp)
	lui	$2,%highest(len)
	daddiu	$2,$2,%higher(len)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(len)
	dsll	$2,$2,16
	ld	$2,%lo(len)($2)
	daddiu	$16,$2,-1
	ld	$4,16($sp)
	balc	strlen
	sd	$2,0($sp)
	bc	.L7
.L10:
	daddu	$16,$16,$17
.L8:
	ld	$2,0($sp)
	bgeuc	$16,$2,.L9
	ld	$2,16($sp)
	daddu	$2,$2,$16
	lb	$2,0($2)
	andi	$2,$2,0x00ff
	move	$3,$2
	lui	$2,%highest(table)
	daddiu	$2,$2,%higher(table)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(table)
	dsll	$2,$2,16
	dsll	$3,$3,3
	daddiu	$2,$2,%lo(table)
	daddu	$2,$3,$2
	ld	$17,0($2)
	bnezc	$17,.L10
	nop
.L9:
	bnezc	$17,.L7
	lui	$2,%highest(findme)
	daddiu	$2,$2,%higher(findme)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(findme)
	dsll	$2,$2,16
	ld	$4,%lo(findme)($2)
	lui	$2,%highest(len)
	daddiu	$2,$2,%higher(len)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(len)
	dsll	$2,$2,16
	ld	$2,%lo(len)($2)
	dsubu	$2,$16,$2
	daddiu	$2,$2,1
	ld	$3,16($sp)
	daddu	$2,$3,$2
	sd	$2,8($sp)
	lui	$2,%highest(len)
	daddiu	$2,$2,%higher(len)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(len)
	dsll	$2,$2,16
	ld	$2,%lo(len)($2)
	move	$6,$2
	ld	$5,8($sp)
	balc	strncmp
	bnezc	$2,.L11
	ld	$2,8($sp)
	bc	.L12
.L11:
	daddiu	$16,$16,1
.L7:
	ld	$2,0($sp)
	bltuc	$16,$2,.L8
	move	$2,$0
.L12:
	ld	$31,56($sp)
	ld	$17,48($sp)
	ld	$16,40($sp)
	daddiu	$sp,$sp,64
	jrc	$31
	.set	macro
	.set	reorder
	.end	strsearch
	.size	strsearch, .-strsearch
	.rdata
	.align	3
.LC108:
	.ascii	"\000"
	.align	3
.LC109:
	.ascii	" not\000"
	.align	3
.LC110:
	.ascii	"\"%s\" is%s in \"%s\"\000"
	.align	3
.LC111:
	.ascii	" [\"%s\"]\000"
	.align	3
.LC0:
	.ascii	"abb\000"
	.align	3
.LC1:
	.ascii	"you\000"
	.align	3
.LC2:
	.ascii	"not\000"
	.align	3
.LC3:
	.ascii	"it\000"
	.align	3
.LC4:
	.ascii	"dad\000"
	.align	3
.LC5:
	.ascii	"yoo\000"
	.align	3
.LC6:
	.ascii	"hoo\000"
	.align	3
.LC7:
	.ascii	"oo\000"
	.align	3
.LC8:
	.ascii	"oh\000"
	.align	3
.LC9:
	.ascii	"xx\000"
	.align	3
.LC10:
	.ascii	"x\000"
	.align	3
.LC11:
	.ascii	"field\000"
	.align	3
.LC12:
	.ascii	"new\000"
	.align	3
.LC13:
	.ascii	"row\000"
	.align	3
.LC14:
	.ascii	"regime\000"
	.align	3
.LC15:
	.ascii	"boom\000"
	.align	3
.LC16:
	.ascii	"that\000"
	.align	3
.LC17:
	.ascii	"impact\000"
	.align	3
.LC18:
	.ascii	"and\000"
	.align	3
.LC19:
	.ascii	"zoom\000"
	.align	3
.LC20:
	.ascii	"texture\000"
	.align	3
.LC21:
	.ascii	"magnet\000"
	.align	3
.LC22:
	.ascii	"doom\000"
	.align	3
.LC23:
	.ascii	"loom\000"
	.align	3
.LC24:
	.ascii	"freq\000"
	.align	3
.LC25:
	.ascii	"current\000"
	.align	3
.LC26:
	.ascii	"phase\000"
	.align	3
.LC27:
	.ascii	"images\000"
	.align	3
.LC28:
	.ascii	"appears\000"
	.align	3
.LC29:
	.ascii	"conductor\000"
	.align	3
.LC30:
	.ascii	"wavez\000"
	.align	3
.LC31:
	.ascii	"normal\000"
	.align	3
.LC32:
	.ascii	"free\000"
	.align	3
.LC33:
	.ascii	"termed\000"
	.align	3
.LC34:
	.ascii	"provide\000"
	.align	3
.LC35:
	.ascii	"for\000"
	.align	3
.LC36:
	.ascii	"struct\000"
	.align	3
.LC37:
	.ascii	"about\000"
	.align	3
.LC38:
	.ascii	"have\000"
	.align	3
.LC39:
	.ascii	"proper\000"
	.align	3
.LC40:
	.ascii	"involve\000"
	.align	3
.LC41:
	.ascii	"describedly\000"
	.align	3
.LC42:
	.ascii	"thats\000"
	.align	3
.LC43:
	.ascii	"spaces\000"
	.align	3
.LC44:
	.ascii	"circumstance\000"
	.align	3
.LC45:
	.ascii	"the\000"
	.align	3
.LC46:
	.ascii	"member\000"
	.align	3
.LC47:
	.ascii	"such\000"
	.align	3
.LC48:
	.ascii	"guide\000"
	.align	3
.LC49:
	.ascii	"regard\000"
	.align	3
.LC50:
	.ascii	"officers\000"
	.align	3
.LC51:
	.ascii	"implement\000"
	.align	3
.LC52:
	.ascii	"principalities\000"
	.align	3
.LC106:
	.dword	.LC0
	.dword	.LC1
	.dword	.LC2
	.dword	.LC3
	.dword	.LC4
	.dword	.LC5
	.dword	.LC6
	.dword	.LC7
	.dword	.LC8
	.dword	.LC9
	.dword	.LC9
	.dword	.LC10
	.dword	.LC10
	.dword	.LC11
	.dword	.LC12
	.dword	.LC13
	.dword	.LC14
	.dword	.LC15
	.dword	.LC16
	.dword	.LC17
	.dword	.LC18
	.dword	.LC19
	.dword	.LC20
	.dword	.LC21
	.dword	.LC22
	.dword	.LC23
	.dword	.LC24
	.dword	.LC25
	.dword	.LC26
	.dword	.LC27
	.dword	.LC28
	.dword	.LC26
	.dword	.LC29
	.dword	.LC30
	.dword	.LC31
	.dword	.LC32
	.dword	.LC33
	.dword	.LC34
	.dword	.LC35
	.dword	.LC18
	.dword	.LC36
	.dword	.LC37
	.dword	.LC38
	.dword	.LC39
	.dword	.LC40
	.dword	.LC41
	.dword	.LC42
	.dword	.LC43
	.dword	.LC44
	.dword	.LC45
	.dword	.LC46
	.dword	.LC47
	.dword	.LC48
	.dword	.LC49
	.dword	.LC50
	.dword	.LC51
	.dword	.LC52
	.dword	0
	.align	3
.LC54:
	.ascii	"cabbie\000"
	.align	3
.LC55:
	.ascii	"your\000"
	.align	3
.LC56:
	.ascii	"It isn't here\000"
	.align	3
.LC57:
	.ascii	"But it is here\000"
	.align	3
.LC58:
	.ascii	"hodad\000"
	.align	3
.LC59:
	.ascii	"yoohoo\000"
	.align	3
.LC60:
	.ascii	".\000"
	.align	3
.LC61:
	.ascii	"In recent years, the field of photonic \000"
	.align	3
.LC62:
	.ascii	"crystals has found new\000"
	.align	3
.LC63:
	.ascii	"applications in the RF and microwave\000"
	.align	3
.LC64:
	.ascii	"regime. A new type of metallic\000"
	.align	3
.LC65:
	.ascii	"electromagnetic crystal has been\000"
	.align	3
.LC66:
	.ascii	"developed that is having a\000"
	.align	3
.LC67:
	.ascii	"significant impact on the field of\000"
	.align	3
.LC68:
	.ascii	"antennas. It consists of a\000"
	.align	3
.LC69:
	.ascii	"conductive surface, covered with a\000"
	.align	3
.LC70:
	.ascii	"special texture which alters its\000"
	.align	3
.LC71:
	.ascii	"electromagnetic properties. Made of solid\000"
	.align	3
.LC72:
	.ascii	"metal, the structure\000"
	.align	3
.LC73:
	.ascii	"conducts DC currents, but over a\000"
	.align	3
.LC74:
	.ascii	"particular frequency range it does\000"
	.align	3
.LC75:
	.ascii	"not conduct AC currents. It does not\000"
	.align	3
.LC76:
	.ascii	"reverse the phase of reflected\000"
	.align	3
.LC77:
	.ascii	"waves, and the effective image currents\000"
	.align	3
.LC78:
	.ascii	"appear in-phase, rather than\000"
	.align	3
.LC79:
	.ascii	"out-of-phase as they are on normal\000"
	.align	3
.LC80:
	.ascii	"conductors. Furthermore, surface\000"
	.align	3
.LC81:
	.ascii	"waves do not propagate, and instead\000"
	.align	3
.LC82:
	.ascii	"radiate efficiently into free\000"
	.align	3
.LC83:
	.ascii	"space. This new material, termed a\000"
	.align	3
.LC84:
	.ascii	"high-impedance surface, provides\000"
	.align	3
.LC85:
	.ascii	"a useful new ground plane for novel\000"
	.align	3
.LC86:
	.ascii	"low-profile antennas and other\000"
	.align	3
.LC87:
	.ascii	"electromagnetic structures.\000"
	.align	3
.LC88:
	.ascii	"The recent protests about the Michigamua\000"
	.align	3
.LC89:
	.ascii	"student organization have raised an\000"
	.align	3
.LC90:
	.ascii	"important question as to the proper nature\000"
	.align	3
.LC91:
	.ascii	"and scope of University involvement\000"
	.align	3
.LC92:
	.ascii	"with student organizations. Accordingly\000"
	.align	3
.LC93:
	.ascii	"the panel described in my Statement of\000"
	.align	3
.LC94:
	.ascii	"February 25, 2000 that is considering the\000"
	.align	3
.LC95:
	.ascii	"question of privileged space also will\000"
	.align	3
.LC96:
	.ascii	"consider under what circumstances and in\000"
	.align	3
.LC97:
	.ascii	"what ways the University, its\000"
	.align	3
.LC98:
	.ascii	"administrators and faculty members should\000"
	.align	3
.LC99:
	.ascii	"be associated with such organizations\000"
	.align	3
.LC100:
	.ascii	"and it will recommend guiding principles\000"
	.align	3
.LC101:
	.ascii	"in this regard. The University's\000"
	.align	3
.LC102:
	.ascii	"Executive Officers and I will then decide\000"
	.align	3
.LC103:
	.ascii	"whether and how to implement such\000"
	.align	3
.LC104:
	.ascii	"principles.\000"
	.align	3
.LC107:
	.dword	.LC54
	.dword	.LC55
	.dword	.LC56
	.dword	.LC57
	.dword	.LC58
	.dword	.LC59
	.dword	.LC59
	.dword	.LC59
	.dword	.LC59
	.dword	.LC59
	.dword	.LC9
	.dword	.LC10
	.dword	.LC60
	.dword	.LC61
	.dword	.LC62
	.dword	.LC63
	.dword	.LC64
	.dword	.LC65
	.dword	.LC66
	.dword	.LC67
	.dword	.LC68
	.dword	.LC69
	.dword	.LC70
	.dword	.LC71
	.dword	.LC72
	.dword	.LC73
	.dword	.LC74
	.dword	.LC75
	.dword	.LC76
	.dword	.LC77
	.dword	.LC78
	.dword	.LC79
	.dword	.LC80
	.dword	.LC81
	.dword	.LC82
	.dword	.LC83
	.dword	.LC84
	.dword	.LC85
	.dword	.LC86
	.dword	.LC87
	.dword	.LC88
	.dword	.LC89
	.dword	.LC90
	.dword	.LC91
	.dword	.LC92
	.dword	.LC93
	.dword	.LC94
	.dword	.LC95
	.dword	.LC96
	.dword	.LC97
	.dword	.LC98
	.dword	.LC99
	.dword	.LC100
	.dword	.LC101
	.dword	.LC102
	.dword	.LC103
	.dword	.LC104
	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:
	.frame	$sp,960,$31		# vars= 944, regs= 1/0, args= 0, gp= 0
	.mask	0x80000000,-8
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	daddiu	$sp,$sp,-960
	sd	$31,952($sp)
	lui	$2,%highest(.LC106)
	daddiu	$2,$2,%higher(.LC106)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC106)
	dsll	$2,$2,16
	daddiu	$4,$sp,16
	daddiu	$2,$2,%lo(.LC106)
	li	$3,464			# 0x1d0
	move	$6,$3
	move	$5,$2
	balc	memcpy
	lui	$2,%highest(.LC107)
	daddiu	$2,$2,%higher(.LC107)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC107)
	dsll	$2,$2,16
	daddiu	$4,$sp,480
	daddiu	$2,$2,%lo(.LC107)
	li	$3,456			# 0x1c8
	move	$6,$3
	move	$5,$2
	balc	memcpy
	sw	$0,0($sp)
	bc	.L15
.L19:
	lw	$2,0($sp)
	dsll	$2,$2,3
	daddu	$2,$sp,$2
	ld	$2,16($2)
	move	$4,$2
	balc	init_search
	lw	$2,0($sp)
	dsll	$2,$2,3
	daddu	$2,$sp,$2
	ld	$2,480($2)
	move	$4,$2
	balc	strsearch
	sd	$2,8($sp)
	lw	$2,0($sp)
	dsll	$2,$2,3
	daddu	$2,$sp,$2
	ld	$4,16($2)
	ld	$2,8($sp)
	beqzc	$2,.L16
	lui	$2,%highest(.LC108)
	daddiu	$2,$2,%higher(.LC108)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC108)
	dsll	$2,$2,16
	daddiu	$3,$2,%lo(.LC108)
	bc	.L17
.L16:
	lui	$2,%highest(.LC109)
	daddiu	$2,$2,%higher(.LC109)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC109)
	dsll	$2,$2,16
	daddiu	$3,$2,%lo(.LC109)
.L17:
	lw	$2,0($sp)
	dsll	$2,$2,3
	daddu	$2,$sp,$2
	ld	$2,480($2)
	move	$7,$2
	move	$6,$3
	move	$5,$4
	lui	$2,%highest(.LC110)
	daddiu	$2,$2,%higher(.LC110)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC110)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC110)
	balc	printf
	ld	$2,8($sp)
	beqzc	$2,.L18
	ld	$5,8($sp)
	lui	$2,%highest(.LC111)
	daddiu	$2,$2,%higher(.LC111)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC111)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC111)
	balc	printf
.L18:
	li	$4,10			# 0xa
	balc	putchar
	lw	$2,0($sp)
	addiu	$2,$2,1
	sw	$2,0($sp)
.L15:
	lw	$2,0($sp)
	dsll	$2,$2,3
	daddu	$2,$sp,$2
	ld	$2,16($2)
	bnezc	$2,.L19
	move	$2,$0
	ld	$31,952($sp)
	daddiu	$sp,$sp,960
	jrc	$31
	.set	macro
	.set	reorder
	.end	main
	.size	main, .-main
	.ident	"GCC: (GNU) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
