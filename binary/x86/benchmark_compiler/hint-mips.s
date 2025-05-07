	.file	1 "hint.c"
	.section .mdebug.abi64
	.previous
	.nan	2008
	.module	fp=64
	.module	oddspreg
	.module	arch=mips64r6
	.text
	.rdata
	.align	3
.LC0:
	.ascii	"         _    _\000"
	.align	3
.LC1:
	.ascii	"         |    |  _ _   _ _____ TM\000"
	.align	3
.LC2:
	.ascii	"         |--  |  | |\\  | | | |\000"
	.align	3
.LC3:
	.ascii	"         |  --|  | | \\ |   |\000"
	.align	3
.LC4:
	.ascii	"         |    |  | |  \\|   |\000"
	.align	3
.LC5:
	.ascii	"         ^    ^  ^ ^   ^   ^\012\000"
	.align	3
.LC6:
	.ascii	"*** The  HINT  PERFORMANCE ANALYZER ***\000"
	.align	3
.LC7:
	.ascii	"   Version 1.0.1  June 1994-July 2022\000"
	.align	3
.LC8:
	.ascii	"   John L. Gustafson & Quinn O. Snell\000"
	.align	3
.LC9:
	.ascii	"     Scalable Computing Laboratory\000"
	.align	3
.LC10:
	.ascii	"   236 Wilhelm, Iowa State University\000"
	.align	3
.LC11:
	.ascii	"        Ames, Iowa    50011-3020\000"
	.align	3
.LC12:
	.ascii	"            (515) 294 - 9294\012\000"
	.align	3
.LC13:
	.ascii	"Copyright (C) 1994\000"
	.align	3
.LC14:
	.ascii	" Iowa State University Research Foundation, Inc.\000"
	.align	3
.LC15:
	.ascii	"Modified for strict ANSI C compatibility 07/2022\000"
	.align	3
.LC16:
	.ascii	"Please send results and questions to: hint@scl.ameslab.g"
	.ascii	"ov\000"
	.align	3
.LC17:
	.ascii	"When sending results please follow the form in README\000"
	.align	3
.LC18:
	.ascii	"________________________________________________________"
	.ascii	"\000"
	.align	3
.LC19:
	.ascii	"NOTE: This program does not take arguments.\000"
	.align	3
.LC20:
	.ascii	"RECT is %d bytes\012\000"
	.align	3
.LC21:
	.ascii	"int\000"
	.align	3
.LC22:
	.ascii	"data/%s\000"
	.align	3
.LC23:
	.ascii	"w\000"
	.align	3
.LC24:
	.ascii	"Could not open data file\000"
	.align	3
.LC25:
	.ascii	"Apparent number of bits of accuracy: %d\012\000"
	.align	3
.LC26:
	.ascii	"Maximum associative whole number:    %.0f\012\000"
	.align	3
.LC27:
	.ascii	"Maximum number of bits of index:     %d\012\000"
	.align	3
.LC28:
	.ascii	"Maximum representable index:         %.0f\012\012\000"
	.align	3
.LC29:
	.ascii	"Index-limited data accuracy:         %d bits\012\000"
	.align	3
.LC30:
	.ascii	"Maximum usable whole number:         %.0f\012\000"
	.align	3
.LC31:
	.ascii	"Grid: %.0f wide by %.0f high.\012\000"
	.align	3
.LC33:
	.ascii	"Data type for %s is too small\012\000"
	.align	3
.LC34:
	.ascii	"Memory is not sufficient for > %3.1f second runs.\012\000"
	.align	3
.LC35:
	.ascii	"Precision is not sufficient for > %3.1f second runs.\012"
	.ascii	"\000"
	.align	3
.LC39:
	.ascii	"\012This run was memory limited at %d subintervals -> %d"
	.ascii	" bytes\012\000"
	.align	3
.LC40:
	.ascii	"\012Done with first pass. Now computing net QUIPS\000"
	.align	3
.LC42:
	.ascii	"%12.10f %f %f %f %10d %f\012\000"
	.align	3
.LC43:
	.ascii	" Forcing a time for %d subintervals\012\000"
	.align	3
.LC44:
	.ascii	"\012Finished with %f net QUIPs\012\000"
	.text
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:
	.frame	$fp,6720,$31		# vars= 6704, regs= 2/0, args= 0, gp= 0
	.mask	0xc0000000,-8
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	daddiu	$sp,$sp,-6720
	sd	$31,6712($sp)
	sd	$fp,6704($sp)
	move	$fp,$sp
	move	$2,$4
	sd	$5,6696($fp)
	sll	$2,$2,0
	sw	$2,6688($fp)
	lui	$2,%highest(.LC0)
	daddiu	$2,$2,%higher(.LC0)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC0)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC0)
	balc	puts
	lui	$2,%highest(.LC1)
	daddiu	$2,$2,%higher(.LC1)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC1)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC1)
	balc	puts
	lui	$2,%highest(.LC2)
	daddiu	$2,$2,%higher(.LC2)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC2)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC2)
	balc	puts
	lui	$2,%highest(.LC3)
	daddiu	$2,$2,%higher(.LC3)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC3)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC3)
	balc	puts
	lui	$2,%highest(.LC4)
	daddiu	$2,$2,%higher(.LC4)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC4)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC4)
	balc	puts
	lui	$2,%highest(.LC5)
	daddiu	$2,$2,%higher(.LC5)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC5)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC5)
	balc	puts
	lui	$2,%highest(.LC6)
	daddiu	$2,$2,%higher(.LC6)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC6)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC6)
	balc	puts
	lui	$2,%highest(.LC7)
	daddiu	$2,$2,%higher(.LC7)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC7)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC7)
	balc	puts
	lui	$2,%highest(.LC8)
	daddiu	$2,$2,%higher(.LC8)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC8)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC8)
	balc	puts
	lui	$2,%highest(.LC9)
	daddiu	$2,$2,%higher(.LC9)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC9)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC9)
	balc	puts
	lui	$2,%highest(.LC10)
	daddiu	$2,$2,%higher(.LC10)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC10)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC10)
	balc	puts
	lui	$2,%highest(.LC11)
	daddiu	$2,$2,%higher(.LC11)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC11)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC11)
	balc	puts
	lui	$2,%highest(.LC12)
	daddiu	$2,$2,%higher(.LC12)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC12)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC12)
	balc	puts
	lui	$2,%highest(.LC13)
	daddiu	$2,$2,%higher(.LC13)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC13)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC13)
	balc	printf
	lui	$2,%highest(.LC14)
	daddiu	$2,$2,%higher(.LC14)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC14)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC14)
	balc	puts
	lui	$2,%highest(.LC15)
	daddiu	$2,$2,%higher(.LC15)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC15)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC15)
	balc	puts
	lui	$2,%highest(.LC16)
	daddiu	$2,$2,%higher(.LC16)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC16)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC16)
	balc	puts
	lui	$2,%highest(.LC17)
	daddiu	$2,$2,%higher(.LC17)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC17)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC17)
	balc	puts
	lui	$2,%highest(.LC18)
	daddiu	$2,$2,%higher(.LC18)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC18)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC18)
	balc	puts
	lw	$2,6688($fp)
	li	$3,1			# 0x1
	bgec	$3,$2,.L2
	lui	$2,%highest(.LC19)
	daddiu	$2,$2,%higher(.LC19)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC19)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC19)
	balc	puts
.L2:
	li	$5,36			# 0x24
	lui	$2,%highest(.LC20)
	daddiu	$2,$2,%higher(.LC20)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC20)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC20)
	balc	printf
	daddiu	$3,$fp,184
	lui	$2,%highest(.LC21)
	daddiu	$2,$2,%higher(.LC21)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC21)
	dsll	$2,$2,16
	daddiu	$6,$2,%lo(.LC21)
	lui	$2,%highest(.LC22)
	daddiu	$2,$2,%higher(.LC22)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC22)
	dsll	$2,$2,16
	daddiu	$5,$2,%lo(.LC22)
	move	$4,$3
	balc	sprintf
	daddiu	$3,$fp,184
	lui	$2,%highest(.LC23)
	daddiu	$2,$2,%higher(.LC23)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC23)
	dsll	$2,$2,16
	daddiu	$5,$2,%lo(.LC23)
	move	$4,$3
	balc	fopen
	sd	$2,96($fp)
	ld	$2,96($fp)
	bnezc	$2,.L3
	lui	$2,%highest(.LC24)
	daddiu	$2,$2,%higher(.LC24)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC24)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC24)
	balc	puts
	li	$4,1			# 0x1
	balc	exit
.L3:
	balc	When
	sdc1	$f0,104($fp)
	nop
.L4:
	balc	When
	sdc1	$f0,112($fp)
	ldc1	$f1,112($fp)
	ldc1	$f0,104($fp)
	cmp.eq.d	$f0,$f1,$f0
	bc1nez	$f0,.L4
	nop

	ldc1	$f1,112($fp)
	ldc1	$f0,104($fp)
	sub.d	$f0,$f1,$f0
	sdc1	$f0,120($fp)
	sw	$0,72($fp)
	li	$2,1			# 0x1
	sw	$2,24($fp)
	lw	$2,24($fp)
	sll	$2,$2,1
	sw	$2,28($fp)
	lw	$2,28($fp)
	addiu	$2,$2,1
	sw	$2,6672($fp)
	bc	.L5
.L7:
	lw	$2,72($fp)
	addiu	$2,$2,1
	sw	$2,72($fp)
	lw	$2,24($fp)
	sll	$2,$2,1
	sw	$2,24($fp)
	lw	$2,28($fp)
	sll	$2,$2,1
	sw	$2,28($fp)
	lw	$2,28($fp)
	addiu	$2,$2,1
	sw	$2,6672($fp)
.L5:
	lw	$2,6672($fp)
	move	$3,$2
	lw	$2,28($fp)
	subu	$2,$3,$2
	move	$3,$2
	li	$2,1			# 0x1
	bnec	$3,$2,.L6
	lw	$2,28($fp)
	bgtzc	$2,.L7
.L6:
	lw	$2,72($fp)
	addiu	$2,$2,1
	sw	$2,72($fp)
	lw	$2,24($fp)
	addiu	$2,$2,-1
	lw	$3,24($fp)
	addu	$2,$3,$2
	sw	$2,12($fp)
	lw	$2,72($fp)
	move	$5,$2
	lui	$2,%highest(.LC25)
	daddiu	$2,$2,%higher(.LC25)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC25)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC25)
	balc	printf
	lw	$2,12($fp)
	mtc1	$2,$f0
	cvt.d.w	$f0,$f0
	dmfc1	$5,$f0
	lui	$2,%highest(.LC26)
	daddiu	$2,$2,%higher(.LC26)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC26)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC26)
	balc	printf
	sw	$0,76($fp)
	li	$2,1			# 0x1
	sw	$2,0($fp)
	lw	$2,0($fp)
	sll	$2,$2,1
	sw	$2,6668($fp)
	bc	.L8
.L9:
	lw	$2,76($fp)
	addiu	$2,$2,1
	sw	$2,76($fp)
	lw	$2,0($fp)
	sll	$2,$2,1
	sw	$2,0($fp)
	lw	$2,6668($fp)
	move	$3,$2
	lw	$2,6668($fp)
	addu	$2,$3,$2
	sw	$2,6668($fp)
.L8:
	lw	$2,6668($fp)
	bgtzc	$2,.L9
	lw	$2,0($fp)
	sw	$2,128($fp)
	lw	$2,76($fp)
	move	$5,$2
	lui	$2,%highest(.LC27)
	daddiu	$2,$2,%higher(.LC27)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC27)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC27)
	balc	printf
	lw	$2,128($fp)
	mtc1	$2,$f0
	cvt.d.w	$f0,$f0
	dmfc1	$5,$f0
	lui	$2,%highest(.LC28)
	daddiu	$2,$2,%higher(.LC28)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC28)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC28)
	balc	printf
	lw	$2,76($fp)
	sll	$2,$2,1
	move	$3,$2
	lw	$2,72($fp)
	bgec	$3,$2,.L10
	lw	$2,128($fp)
	mul	$2,$2,$2
	addiu	$2,$2,-1
	sw	$2,12($fp)
	lw	$2,76($fp)
	sll	$2,$2,1
	sw	$2,72($fp)
.L10:
	lw	$2,72($fp)
	move	$5,$2
	lui	$2,%highest(.LC29)
	daddiu	$2,$2,%higher(.LC29)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC29)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC29)
	balc	printf
	lw	$2,12($fp)
	mtc1	$2,$f0
	cvt.d.w	$f0,$f0
	dmfc1	$5,$f0
	lui	$2,%highest(.LC30)
	daddiu	$2,$2,%higher(.LC30)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC30)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC30)
	balc	printf
	lw	$2,72($fp)
	srl	$3,$2,31
	addu	$2,$3,$2
	sra	$2,$2,1
	sw	$2,84($fp)
	sw	$0,80($fp)
	li	$2,1			# 0x1
	sw	$2,16($fp)
	bc	.L11
.L12:
	lw	$2,16($fp)
	sll	$2,$2,1
	sw	$2,16($fp)
	lw	$2,80($fp)
	addiu	$2,$2,1
	sw	$2,80($fp)
.L11:
	lw	$3,80($fp)
	lw	$2,84($fp)
	bltc	$3,$2,.L12
	sw	$0,80($fp)
	li	$2,1			# 0x1
	sw	$2,20($fp)
	bc	.L13
.L14:
	lw	$2,20($fp)
	sll	$2,$2,1
	sw	$2,20($fp)
	lw	$2,80($fp)
	addiu	$2,$2,1
	sw	$2,80($fp)
.L13:
	lw	$3,72($fp)
	lw	$2,84($fp)
	subu	$2,$3,$2
	move	$3,$2
	lw	$2,80($fp)
	bltc	$2,$3,.L14
	lw	$2,16($fp)
	mtc1	$2,$f0
	cvt.d.w	$f0,$f0
	lw	$2,20($fp)
	mtc1	$2,$f1
	cvt.d.w	$f1,$f1
	dmfc1	$6,$f1
	dmfc1	$5,$f0
	lui	$2,%highest(.LC31)
	daddiu	$2,$2,%higher(.LC31)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC31)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC31)
	balc	printf
	sd	$0,64($fp)
	li	$2,2			# 0x2
	sw	$2,8($fp)
	li	$2,3			# 0x3
	sw	$2,132($fp)
	bc	.L15
.L20:
	daddiu	$7,$fp,6664
	lw	$6,8($fp)
	lw	$5,12($fp)
	lw	$4,20($fp)
	lw	$3,16($fp)
	daddiu	$11,$fp,6676
	lw	$2,132($fp)
	move	$10,$7
	move	$9,$6
	move	$8,$5
	move	$7,$4
	move	$6,$3
	move	$5,$11
	move	$4,$2
	balc	Run
	sdc1	$f0,56($fp)
	lw	$2,6664($fp)
	beqzc	$2,.L16
	lw	$2,8($fp)
	srl	$3,$2,31
	addu	$2,$3,$2
	sra	$2,$2,1
	sw	$2,8($fp)
	bc	.L17
.L16:
	ldc1	$f1,56($fp)
	lui	$2,%highest(.LC32)
	daddiu	$2,$2,%higher(.LC32)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC32)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC32)($2)
	cmp.lt.d	$f0,$f0,$f1
	bc1eqz	$f0,.L18
	nop

	lw	$2,6664($fp)
	bnezc	$2,.L18
	ldc1	$f0,56($fp)
	sdc1	$f0,64($fp)
	bc	.L17
.L18:
	ldc1	$f0,56($fp)
	sdc1	$f0,64($fp)
	lw	$2,8($fp)
	sll	$2,$2,1
	sw	$2,8($fp)
	lw	$2,8($fp)
	lw	$3,16($fp)
	bgec	$3,$2,.L15
	lw	$2,8($fp)
	srl	$3,$2,31
	addu	$2,$3,$2
	sra	$2,$2,1
	sw	$2,8($fp)
	bc	.L17
.L15:
	lw	$3,8($fp)
	lw	$2,16($fp)
	bltc	$3,$2,.L20
.L17:
	ldc1	$f0,64($fp)
	dmtc1	$0,$f1
	cmp.une.d	$f0,$f0,$f1
	bc1nez	$f0,.L21
	nop

	ld	$2,6696($fp)
	ld	$2,0($2)
	move	$5,$2
	lui	$2,%highest(.LC33)
	daddiu	$2,$2,%higher(.LC33)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC33)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC33)
	balc	printf
	move	$4,$0
	balc	exit
.L21:
	ldc1	$f1,64($fp)
	lui	$2,%highest(.LC32)
	daddiu	$2,$2,%higher(.LC32)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC32)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC32)($2)
	cmp.lt.d	$f0,$f1,$f0
	bc1eqz	$f0,.L22
	nop

	lw	$3,6664($fp)
	li	$2,2			# 0x2
	bnec	$3,$2,.L22
	lui	$2,%highest(.LC32)
	daddiu	$2,$2,%higher(.LC32)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC32)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC32)($2)
	dmfc1	$5,$f0
	lui	$2,%highest(.LC34)
	daddiu	$2,$2,%higher(.LC34)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC34)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC34)
	balc	printf
	bc	.L24
.L22:
	ldc1	$f1,64($fp)
	lui	$2,%highest(.LC32)
	daddiu	$2,$2,%higher(.LC32)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC32)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC32)($2)
	cmp.lt.d	$f0,$f1,$f0
	bc1eqz	$f0,.L24
	nop

	lui	$2,%highest(.LC32)
	daddiu	$2,$2,%higher(.LC32)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC32)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC32)($2)
	dmfc1	$5,$f0
	lui	$2,%highest(.LC35)
	daddiu	$2,$2,%higher(.LC35)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC35)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC35)
	balc	printf
.L24:
	sd	$0,56($fp)
	sw	$0,80($fp)
	li	$2,2			# 0x2
	sw	$2,4($fp)
	sd	$0,40($fp)
	lui	$2,%highest(.LC32)
	daddiu	$2,$2,%higher(.LC32)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC32)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC32)($2)
	sdc1	$f0,48($fp)
	bc	.L26
.L39:
	li	$4,46			# 0x2e
	balc	putchar
	lui	$2,%highest(stdout)
	daddiu	$2,$2,%higher(stdout)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(stdout)
	dsll	$2,$2,16
	ld	$2,%lo(stdout)($2)
	move	$4,$2
	balc	fflush
	lw	$2,8($fp)
	mtc1	$2,$f0
	cvt.d.w	$f1,$f0
	lw	$2,4($fp)
	mtc1	$2,$f0
	cvt.d.w	$f2,$f0
	ldc1	$f0,64($fp)
	mul.d	$f0,$f2,$f0
	div.d	$f1,$f1,$f0
	lui	$2,%highest(.LC32)
	daddiu	$2,$2,%higher(.LC32)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC32)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC32)($2)
	cmp.lt.d	$f0,$f0,$f1
	bc1eqz	$f0,.L69
	nop

	lw	$2,8($fp)
	mtc1	$2,$f0
	cvt.d.w	$f1,$f0
	lw	$2,4($fp)
	mtc1	$2,$f0
	cvt.d.w	$f2,$f0
	ldc1	$f0,64($fp)
	mul.d	$f0,$f2,$f0
	div.d	$f0,$f1,$f0
	trunc.w.d $f0,$f0
	mfc1	$2,$f0
	bc	.L29
.L69:
	li	$2,1			# 0x1
.L29:
	sw	$2,132($fp)
	daddiu	$7,$fp,6664
	lw	$6,4($fp)
	lw	$5,12($fp)
	lw	$4,20($fp)
	lw	$3,16($fp)
	daddiu	$11,$fp,6676
	lw	$2,132($fp)
	move	$10,$7
	move	$9,$6
	move	$8,$5
	move	$7,$4
	move	$6,$3
	move	$5,$11
	move	$4,$2
	balc	Run
	sdc1	$f0,56($fp)
	ldc1	$f0,56($fp)
	dmtc1	$0,$f1
	cmp.une.d	$f0,$f0,$f1
	bc1nez	$f0,.L30
	nop

	ldc1	$f0,120($fp)
	sdc1	$f0,56($fp)
.L30:
	lw	$2,6664($fp)
	bnezc	$2,.L72
	lw	$2,12($fp)
	mtc1	$2,$f0
	cvt.d.w	$f1,$f0
	lw	$2,6676($fp)
	dmtc1	$2,$f0
	cvt.d.w	$f0,$f0
	div.d	$f1,$f1,$f0
	lui	$2,%highest(.LC32)
	daddiu	$2,$2,%higher(.LC32)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC32)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC32)($2)
	sub.d	$f0,$f1,$f0
	sdc1	$f0,136($fp)
	ldc1	$f1,136($fp)
	ldc1	$f0,56($fp)
	div.d	$f1,$f1,$f0
	lw	$2,6676($fp)
	dmtc1	$2,$f0
	cvt.d.w	$f0,$f0
	lui	$2,%highest(.LC32)
	daddiu	$2,$2,%higher(.LC32)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC32)
	dsll	$2,$2,16
	ldc1	$f2,%lo(.LC32)($2)
	div.d	$f2,$f2,$f0
	ldc1	$f0,56($fp)
	div.d	$f0,$f2,$f0
	add.d	$f0,$f1,$f0
	sdc1	$f0,144($fp)
	lw	$2,80($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f0,56($fp)
	sdc1	$f0,264($2)
	lw	$2,80($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f0,144($fp)
	sdc1	$f0,272($2)
	lw	$2,80($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f0,136($fp)
	sdc1	$f0,280($2)
	lw	$2,80($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	lw	$3,4($fp)
	sw	$3,288($2)
	ldc1	$f1,40($fp)
	ldc1	$f0,144($fp)
	cmp.lt.d	$f0,$f0,$f1
	bc1eqz	$f0,.L70
	nop

	ldc1	$f0,40($fp)
	bc	.L35
.L70:
	ldc1	$f0,144($fp)
.L35:
	sdc1	$f0,40($fp)
	ldc1	$f1,144($fp)
	ldc1	$f0,40($fp)
	div.d	$f0,$f1,$f0
	sdc1	$f0,48($fp)
	lw	$2,80($fp)
	addiu	$2,$2,1
	sw	$2,80($fp)
	lw	$2,4($fp)
	mtc1	$2,$f0
	cvt.d.w	$f1,$f0
	lui	$2,%highest(.LC36)
	daddiu	$2,$2,%higher(.LC36)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC36)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC36)($2)
	mul.d	$f0,$f1,$f0
	trunc.w.d $f0,$f0
	mfc1	$2,$f0
	move	$3,$2
	lw	$2,4($fp)
	bgec	$2,$3,.L36
	lw	$2,4($fp)
	mtc1	$2,$f0
	cvt.d.w	$f1,$f0
	lui	$2,%highest(.LC36)
	daddiu	$2,$2,%higher(.LC36)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC36)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC36)($2)
	mul.d	$f0,$f1,$f0
	trunc.w.d $f0,$f0
	mfc1	$2,$f0
	bc	.L37
.L36:
	lw	$2,4($fp)
	addiu	$2,$2,1
	dmtc1	$2,$f0
	cvt.d.w	$f0,$f0
	trunc.w.d $f0,$f0
	mfc1	$2,$f0
.L37:
	sw	$2,4($fp)
.L26:
	lw	$2,80($fp)
	li	$3,199			# 0xc7
	bltc	$3,$2,.L32
	ldc1	$f1,56($fp)
	lui	$2,%highest(.LC37)
	daddiu	$2,$2,%higher(.LC37)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC37)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC37)($2)
	cmp.lt.d	$f0,$f1,$f0
	bc1eqz	$f0,.L32
	nop

	lw	$3,4($fp)
	lw	$2,16($fp)
	bgec	$3,$2,.L32
	ldc1	$f1,48($fp)
	lui	$2,%highest(.LC38)
	daddiu	$2,$2,%higher(.LC38)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC38)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC38)($2)
	cmp.lt.d	$f0,$f0,$f1
	bc1nez	$f0,.L39
	nop

	bc	.L32
.L72:
	nop
.L32:
	lw	$2,80($fp)
	addiu	$2,$2,-1
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	lw	$2,288($2)
	move	$3,$2
	move	$2,$3
	sll	$2,$2,2
	addu	$2,$2,$3
	sll	$2,$2,1
	addu	$2,$2,$3
	sll	$2,$2,2
	sw	$2,152($fp)
	ldc1	$f1,48($fp)
	lui	$2,%highest(.LC38)
	daddiu	$2,$2,%higher(.LC38)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC38)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC38)($2)
	cmp.lt.d	$f0,$f0,$f1
	bc1eqz	$f0,.L40
	nop

	lw	$3,6664($fp)
	li	$2,2			# 0x2
	bnec	$3,$2,.L40
	lw	$3,152($fp)
	lw	$2,4($fp)
	move	$6,$3
	move	$5,$2
	lui	$2,%highest(.LC39)
	daddiu	$2,$2,%higher(.LC39)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC39)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC39)
	balc	printf
.L40:
	lui	$2,%highest(.LC40)
	daddiu	$2,$2,%higher(.LC40)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC40)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC40)
	balc	puts
	lw	$2,80($fp)
	addiu	$2,$2,-1
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	lw	$2,288($2)
	move	$3,$2
	move	$2,$3
	dsll	$2,$2,2
	daddu	$2,$2,$3
	dsll	$3,$2,2
	daddu	$2,$2,$3
	dsll	$2,$2,4
	bltzc	$2,.L43
	dmtc1	$2,$f0
	cvt.d.l	$f0,$f0
	bc	.L42
.L43:
	andi	$3,$2,0x1
	dsrl	$2,$2,1
	or	$3,$3,$2
	dmtc1	$3,$f0
	cvt.d.l	$f0,$f0
	add.d	$f0,$f0,$f0
.L42:
	sdc1	$f0,160($fp)
	ldc1	$f1,160($fp)
	lui	$2,%highest(.LC41)
	daddiu	$2,$2,%higher(.LC41)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC41)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC41)($2)
	div.d	$f0,$f1,$f0
	sdc1	$f0,160($fp)
	lw	$2,80($fp)
	addiu	$2,$2,-1
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f0,264($2)
	ldc1	$f1,160($fp)
	div.d	$f0,$f1,$f0
	sdc1	$f0,168($fp)
	lw	$2,80($fp)
	addiu	$2,$2,-1
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f0,264($2)
	lw	$2,80($fp)
	addiu	$2,$2,-1
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f1,272($2)
	lw	$2,80($fp)
	addiu	$2,$2,-1
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f2,280($2)
	lw	$2,80($fp)
	addiu	$2,$2,-1
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	lw	$2,288($2)
	dmtc1	$2,$f3
	cvt.d.w	$f3,$f3
	lw	$2,152($fp)
	ld	$11,168($fp)
	move	$10,$2
	dmfc1	$9,$f3
	dmfc1	$8,$f2
	dmfc1	$7,$f1
	dmfc1	$6,$f0
	lui	$2,%highest(.LC42)
	daddiu	$2,$2,%higher(.LC42)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC42)
	dsll	$2,$2,16
	daddiu	$5,$2,%lo(.LC42)
	ld	$4,96($fp)
	balc	fprintf
	lw	$2,80($fp)
	addiu	$2,$2,-1
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f0,272($2)
	sdc1	$f0,32($fp)
	lw	$2,80($fp)
	addiu	$2,$2,-2
	sw	$2,84($fp)
	bc	.L44
.L57:
	sw	$0,88($fp)
	bc	.L45
.L52:
	li	$4,35			# 0x23
	balc	putchar
	lw	$2,8($fp)
	mtc1	$2,$f0
	cvt.d.w	$f1,$f0
	lw	$2,84($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	lw	$2,288($2)
	dmtc1	$2,$f0
	cvt.d.w	$f2,$f0
	ldc1	$f0,64($fp)
	mul.d	$f0,$f2,$f0
	div.d	$f1,$f1,$f0
	lui	$2,%highest(.LC32)
	daddiu	$2,$2,%higher(.LC32)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC32)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC32)($2)
	cmp.lt.d	$f0,$f0,$f1
	bc1eqz	$f0,.L71
	nop

	lw	$2,8($fp)
	mtc1	$2,$f0
	cvt.d.w	$f1,$f0
	lw	$2,84($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	lw	$2,288($2)
	dmtc1	$2,$f0
	cvt.d.w	$f2,$f0
	ldc1	$f0,64($fp)
	mul.d	$f0,$f2,$f0
	div.d	$f0,$f1,$f0
	trunc.w.d $f0,$f0
	mfc1	$2,$f0
	bc	.L48
.L71:
	li	$2,1			# 0x1
.L48:
	sw	$2,132($fp)
	lw	$2,84($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	lw	$6,288($2)
	daddiu	$7,$fp,6664
	lw	$5,12($fp)
	lw	$4,20($fp)
	lw	$3,16($fp)
	daddiu	$11,$fp,6676
	lw	$2,132($fp)
	move	$10,$7
	move	$9,$6
	move	$8,$5
	move	$7,$4
	move	$6,$3
	move	$5,$11
	move	$4,$2
	balc	Run
	sdc1	$f0,56($fp)
	ldc1	$f0,56($fp)
	dmtc1	$0,$f1
	cmp.une.d	$f0,$f0,$f1
	bc1nez	$f0,.L49
	nop

	ldc1	$f0,120($fp)
	sdc1	$f0,56($fp)
.L49:
	lw	$2,12($fp)
	mtc1	$2,$f0
	cvt.d.w	$f1,$f0
	lw	$2,6676($fp)
	dmtc1	$2,$f0
	cvt.d.w	$f0,$f0
	div.d	$f1,$f1,$f0
	lui	$2,%highest(.LC32)
	daddiu	$2,$2,%higher(.LC32)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC32)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC32)($2)
	sub.d	$f0,$f1,$f0
	sdc1	$f0,136($fp)
	ldc1	$f1,136($fp)
	ldc1	$f0,56($fp)
	div.d	$f1,$f1,$f0
	lw	$2,6676($fp)
	dmtc1	$2,$f0
	cvt.d.w	$f0,$f0
	lui	$2,%highest(.LC32)
	daddiu	$2,$2,%higher(.LC32)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC32)
	dsll	$2,$2,16
	ldc1	$f2,%lo(.LC32)($2)
	div.d	$f2,$f2,$f0
	ldc1	$f0,56($fp)
	div.d	$f0,$f2,$f0
	add.d	$f0,$f1,$f0
	sdc1	$f0,144($fp)
	lw	$2,84($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f0,56($fp)
	sdc1	$f0,264($2)
	lw	$2,84($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f0,144($fp)
	sdc1	$f0,272($2)
	lw	$2,88($fp)
	addiu	$2,$2,1
	sw	$2,88($fp)
.L45:
	lw	$2,84($fp)
	addiu	$2,$2,1
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f1,264($2)
	lw	$2,84($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f0,264($2)
	cmp.lt.d	$f0,$f1,$f0
	bc1eqz	$f0,.L50
	nop

	lw	$2,88($fp)
	li	$3,12			# 0xc
	bgec	$3,$2,.L52
.L50:
	lw	$2,84($fp)
	addiu	$2,$2,1
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f1,264($2)
	lw	$2,84($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f0,264($2)
	cmp.lt.d	$f0,$f1,$f0
	bc1eqz	$f0,.L53
	nop

	lw	$2,84($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	lw	$2,288($2)
	move	$5,$2
	lui	$2,%highest(.LC43)
	daddiu	$2,$2,%higher(.LC43)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC43)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC43)
	balc	printf
	lw	$2,84($fp)
	addiu	$2,$2,1
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f0,264($2)
	lw	$2,84($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	sdc1	$f0,264($2)
	lw	$2,12($fp)
	mtc1	$2,$f0
	cvt.d.w	$f1,$f0
	lw	$2,6676($fp)
	dmtc1	$2,$f0
	cvt.d.w	$f0,$f0
	div.d	$f1,$f1,$f0
	lui	$2,%highest(.LC32)
	daddiu	$2,$2,%higher(.LC32)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC32)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC32)($2)
	sub.d	$f0,$f1,$f0
	sdc1	$f0,136($fp)
	lw	$2,84($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f0,264($2)
	ldc1	$f1,136($fp)
	div.d	$f1,$f1,$f0
	lw	$2,6676($fp)
	dmtc1	$2,$f0
	cvt.d.w	$f0,$f0
	lui	$2,%highest(.LC32)
	daddiu	$2,$2,%higher(.LC32)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC32)
	dsll	$2,$2,16
	ldc1	$f2,%lo(.LC32)($2)
	div.d	$f2,$f2,$f0
	lw	$2,84($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f0,264($2)
	div.d	$f0,$f2,$f0
	add.d	$f0,$f1,$f0
	lw	$2,84($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	sdc1	$f0,272($2)
.L53:
	lw	$2,84($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	lw	$2,288($2)
	move	$3,$2
	move	$2,$3
	sll	$2,$2,2
	addu	$2,$2,$3
	sll	$2,$2,1
	addu	$2,$2,$3
	sll	$2,$2,2
	sw	$2,152($fp)
	lw	$2,84($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	lw	$2,288($2)
	move	$3,$2
	move	$2,$3
	dsll	$2,$2,2
	daddu	$2,$2,$3
	dsll	$3,$2,2
	daddu	$2,$2,$3
	dsll	$2,$2,4
	bltzc	$2,.L56
	dmtc1	$2,$f0
	cvt.d.l	$f0,$f0
	bc	.L55
.L56:
	andi	$3,$2,0x1
	dsrl	$2,$2,1
	or	$3,$3,$2
	dmtc1	$3,$f0
	cvt.d.l	$f0,$f0
	add.d	$f0,$f0,$f0
.L55:
	sdc1	$f0,160($fp)
	ldc1	$f1,160($fp)
	lui	$2,%highest(.LC41)
	daddiu	$2,$2,%higher(.LC41)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC41)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC41)($2)
	div.d	$f0,$f1,$f0
	sdc1	$f0,160($fp)
	lw	$2,84($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f0,264($2)
	ldc1	$f1,160($fp)
	div.d	$f0,$f1,$f0
	sdc1	$f0,168($fp)
	lw	$2,84($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f0,264($2)
	lw	$2,84($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f1,272($2)
	lw	$2,84($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f2,280($2)
	lw	$2,84($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	lw	$2,288($2)
	dmtc1	$2,$f3
	cvt.d.w	$f3,$f3
	lw	$2,152($fp)
	ld	$11,168($fp)
	move	$10,$2
	dmfc1	$9,$f3
	dmfc1	$8,$f2
	dmfc1	$7,$f1
	dmfc1	$6,$f0
	lui	$2,%highest(.LC42)
	daddiu	$2,$2,%higher(.LC42)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC42)
	dsll	$2,$2,16
	daddiu	$5,$2,%lo(.LC42)
	ld	$4,96($fp)
	balc	fprintf
	lw	$2,84($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f1,272($2)
	lw	$2,84($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f0,264($2)
	mul.d	$f1,$f1,$f0
	lw	$2,84($fp)
	addiu	$2,$2,1
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f0,264($2)
	div.d	$f0,$f1,$f0
	sdc1	$f0,176($fp)
	lw	$2,84($fp)
	dsll	$2,$2,5
	daddu	$2,$fp,$2
	ldc1	$f1,272($2)
	ldc1	$f0,176($fp)
	sub.d	$f0,$f1,$f0
	ldc1	$f1,32($fp)
	add.d	$f0,$f1,$f0
	sdc1	$f0,32($fp)
	lw	$2,84($fp)
	addiu	$2,$2,-1
	sw	$2,84($fp)
.L44:
	lw	$2,84($fp)
	bgezc	$2,.L57
	ld	$5,32($fp)
	lui	$2,%highest(.LC44)
	daddiu	$2,$2,%higher(.LC44)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC44)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC44)
	balc	printf
	ld	$4,96($fp)
	balc	fclose
	move	$2,$0
	move	$sp,$fp
	ld	$31,6712($sp)
	ld	$fp,6704($sp)
	daddiu	$sp,$sp,6720
	jrc	$31
	.set	macro
	.set	reorder
	.end	main
	.size	main, .-main
	.align	2
	.globl	Run
	.set	nomips16
	.set	nomicromips
	.ent	Run
	.type	Run, @function
Run:
	.frame	$fp,128,$31		# vars= 112, regs= 2/0, args= 0, gp= 0
	.mask	0xc0000000,-8
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	daddiu	$sp,$sp,-128
	sd	$31,120($sp)
	sd	$fp,112($sp)
	move	$fp,$sp
	move	$11,$4
	sd	$5,72($fp)
	move	$5,$6
	move	$4,$7
	move	$3,$8
	move	$2,$9
	sd	$10,96($fp)
	sll	$6,$11,0
	sw	$6,64($fp)
	sll	$5,$5,0
	sw	$5,68($fp)
	sll	$4,$4,0
	sw	$4,80($fp)
	sll	$3,$3,0
	sw	$3,84($fp)
	sll	$2,$2,0
	sw	$2,88($fp)
	sd	$0,16($fp)
	sd	$0,24($fp)
	sd	$0,32($fp)
	lui	$2,%highest(.LC45)
	daddiu	$2,$2,%higher(.LC45)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC45)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC45)($2)
	sdc1	$f0,8($fp)
	ld	$2,96($fp)
	sw	$0,0($2)
	lw	$2,88($fp)
	move	$3,$2
	move	$2,$3
	sll	$2,$2,3
	addu	$2,$2,$3
	sll	$2,$2,2
	move	$4,$2
	balc	malloc
	sd	$2,16($fp)
	lw	$2,88($fp)
	sll	$2,$2,3
	move	$4,$2
	balc	malloc
	sd	$2,32($fp)
	lw	$2,88($fp)
	sll	$2,$2,3
	move	$4,$2
	balc	malloc
	sd	$2,24($fp)
	ld	$2,16($fp)
	beqzc	$2,.L74
	ld	$2,32($fp)
	beqzc	$2,.L74
	ld	$2,24($fp)
	bnezc	$2,.L75
.L74:
	ld	$2,16($fp)
	beqzc	$2,.L76
	ld	$4,16($fp)
	balc	free
.L76:
	ld	$2,32($fp)
	beqzc	$2,.L77
	ld	$4,32($fp)
	balc	free
.L77:
	ld	$2,24($fp)
	beqzc	$2,.L78
	ld	$4,24($fp)
	balc	free
.L78:
	ld	$2,96($fp)
	li	$3,2			# 0x2
	sw	$3,0($2)
	lui	$2,%highest(.LC46)
	daddiu	$2,$2,%higher(.LC46)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC46)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC46)($2)
	bc	.L79
.L75:
	sw	$0,0($fp)
	bc	.L80
.L86:
	balc	When
	sdc1	$f0,40($fp)
	sw	$0,4($fp)
	bc	.L81
.L82:
	daddiu	$5,$fp,88
	daddiu	$4,$fp,84
	daddiu	$3,$fp,80
	daddiu	$2,$fp,68
	ld	$11,96($fp)
	ld	$10,24($fp)
	ld	$9,32($fp)
	ld	$8,16($fp)
	move	$7,$5
	move	$6,$4
	move	$5,$3
	move	$4,$2
	balc	Hint
	move	$3,$2
	ld	$2,72($fp)
	sw	$3,0($2)
	lw	$2,4($fp)
	addiu	$2,$2,1
	sw	$2,4($fp)
.L81:
	lw	$3,4($fp)
	lw	$2,64($fp)
	bltc	$3,$2,.L82
	nop
	balc	When
	sdc1	$f0,48($fp)
	ldc1	$f1,48($fp)
	ldc1	$f0,40($fp)
	sub.d	$f1,$f1,$f0
	lw	$2,64($fp)
	mtc1	$2,$f0
	cvt.d.w	$f0,$f0
	div.d	$f0,$f1,$f0
	sdc1	$f0,56($fp)
	ldc1	$f1,8($fp)
	ldc1	$f0,56($fp)
	cmp.lt.d	$f0,$f0,$f1
	bc1eqz	$f0,.L88
	nop

	ldc1	$f0,56($fp)
	bc	.L85
.L88:
	ldc1	$f0,8($fp)
.L85:
	sdc1	$f0,8($fp)
	lw	$2,0($fp)
	addiu	$2,$2,1
	sw	$2,0($fp)
.L80:
	lw	$2,0($fp)
	li	$3,14			# 0xe
	bgec	$3,$2,.L86
	ld	$4,16($fp)
	balc	free
	ld	$4,32($fp)
	balc	free
	ld	$4,24($fp)
	balc	free
	ldc1	$f0,8($fp)
.L79:
	move	$sp,$fp
	ld	$31,120($sp)
	ld	$fp,112($sp)
	daddiu	$sp,$sp,128
	jrc	$31
	.set	macro
	.set	reorder
	.end	Run
	.size	Run, .-Run
	.align	2
	.globl	When
	.set	nomips16
	.set	nomicromips
	.ent	When
	.type	When, @function
When:
	.frame	$fp,32,$31		# vars= 16, regs= 2/0, args= 0, gp= 0
	.mask	0xc0000000,-8
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	daddiu	$sp,$sp,-32
	sd	$31,24($sp)
	sd	$fp,16($sp)
	move	$fp,$sp
	move	$5,$0
	move	$4,$fp
	balc	gettimeofday
	ld	$2,0($fp)
	dmtc1	$2,$f0
	cvt.d.l	$f1,$f0
	ld	$2,8($fp)
	dmtc1	$2,$f0
	cvt.d.l	$f2,$f0
	lui	$2,%highest(.LC47)
	daddiu	$2,$2,%higher(.LC47)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC47)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC47)($2)
	mul.d	$f0,$f2,$f0
	add.d	$f0,$f1,$f0
	move	$sp,$fp
	ld	$31,24($sp)
	ld	$fp,16($sp)
	daddiu	$sp,$sp,32
	jrc	$31
	.set	macro
	.set	reorder
	.end	When
	.size	When, .-When
	.rdata
	.align	3
.LC32:
	.word	1072693248
	.word	0
	.align	3
.LC36:
	.word	1072798105
	.word	-1717986918
	.align	3
.LC37:
	.word	1080950784
	.word	0
	.align	3
.LC38:
	.word	1069128089
	.word	-1717986918
	.align	3
.LC41:
	.word	1093664768
	.word	0
	.align	3
.LC45:
	.word	1184086197
	.word	-1257935337
	.align	3
.LC46:
	.word	-1073741824
	.word	0
	.align	3
.LC47:
	.word	1051772663
	.word	-1598689907
	.ident	"GCC: (GNU) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
