	.globl	main
main:
	daddiu	$sp,$sp,-224
	sd	$31,216($sp)
	sd	$fp,208($sp)
	move	$fp,$sp
	lui	$2,%highest(.LC0)
	daddiu	$2,$2,%higher(.LC0)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC0)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC0)($2)
	sdc1	$f0,0($fp)
	lui	$2,%highest(.LC1)
	daddiu	$2,$2,%higher(.LC1)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC1)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC1)($2)
	sdc1	$f0,8($fp)
	lui	$2,%highest(.LC2)
	daddiu	$2,$2,%higher(.LC2)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC2)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC2)($2)
	sdc1	$f0,16($fp)
	lui	$2,%highest(.LC3)
	daddiu	$2,$2,%higher(.LC3)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC3)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC3)($2)
	sdc1	$f0,24($fp)
	lui	$2,%highest(.LC0)
	daddiu	$2,$2,%higher(.LC0)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC0)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC0)($2)
	sdc1	$f0,48($fp)
	lui	$2,%highest(.LC4)
	daddiu	$2,$2,%higher(.LC4)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC4)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC4)($2)
	sdc1	$f0,56($fp)
	lui	$2,%highest(.LC5)
	daddiu	$2,$2,%higher(.LC5)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC5)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC5)($2)
	sdc1	$f0,64($fp)
	lui	$2,%highest(.LC3)
	daddiu	$2,$2,%higher(.LC3)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC3)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC3)($2)
	sdc1	$f0,72($fp)
	lui	$2,%highest(.LC0)
	daddiu	$2,$2,%higher(.LC0)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC0)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC0)($2)
	sdc1	$f0,80($fp)
	lui	$2,%highest(.LC6)
	daddiu	$2,$2,%higher(.LC6)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC6)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC6)($2)
	sdc1	$f0,88($fp)
	lui	$2,%highest(.LC7)
	daddiu	$2,$2,%higher(.LC7)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC7)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC7)($2)
	sdc1	$f0,96($fp)
	lui	$2,%highest(.LC8)
	daddiu	$2,$2,%higher(.LC8)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC8)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC8)($2)
	sdc1	$f0,104($fp)
	lui	$2,%highest(.LC0)
	daddiu	$2,$2,%higher(.LC0)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC0)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC0)($2)
	sdc1	$f0,112($fp)
	lui	$2,%highest(.LC9)
	daddiu	$2,$2,%higher(.LC9)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC9)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC9)($2)
	sdc1	$f0,120($fp)
	lui	$2,%highest(.LC0)
	daddiu	$2,$2,%higher(.LC0)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC0)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC0)($2)
	sdc1	$f0,128($fp)
	lui	$2,%highest(.LC10)
	daddiu	$2,$2,%higher(.LC10)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC10)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC10)($2)
	sdc1	$f0,136($fp)
	li	$2,1072496640			
	ori	$2,$2,0x169
	sd	$2,144($fp)
	sd	$0,152($fp)
	lui	$2,%highest(.LC11)
	daddiu	$2,$2,%higher(.LC11)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC11)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC11)
	balc	puts
	daddiu	$3,$fp,160
	daddiu	$2,$fp,184
	move	$9,$3
	move	$8,$2
	ldc1	$f15,24($fp)
	ldc1	$f14,16($fp)
	ldc1	$f13,8($fp)
	ldc1	$f12,0($fp)
	balc	SolveCubic
	lui	$2,%highest(.LC12)
	daddiu	$2,$2,%higher(.LC12)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC12)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC12)
	balc	printf
	sw	$0,40($fp)
	bc	.L2
.L3:
	lw	$2,40($fp)
	dsll	$2,$2,3
	daddu	$2,$fp,$2
	ldc1	$f0,160($2)
	dmfc1	$5,$f0
	lui	$2,%highest(.LC13)
	daddiu	$2,$2,%higher(.LC13)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC13)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC13)
	balc	printf
	lw	$2,40($fp)
	addiu	$2,$2,1
	sw	$2,40($fp)
.L2:
	lw	$3,184($fp)
	lw	$2,40($fp)
	bltc	$2,$3,.L3
	li	$4,10			
	balc	putchar
	daddiu	$3,$fp,160
	daddiu	$2,$fp,184
	move	$9,$3
	move	$8,$2
	ldc1	$f15,72($fp)
	ldc1	$f14,64($fp)
	ldc1	$f13,56($fp)
	ldc1	$f12,48($fp)
	balc	SolveCubic
	lui	$2,%highest(.LC12)
	daddiu	$2,$2,%higher(.LC12)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC12)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC12)
	balc	printf
	sw	$0,40($fp)
	bc	.L4
.L5:
	lw	$2,40($fp)
	dsll	$2,$2,3
	daddu	$2,$fp,$2
	ldc1	$f0,160($2)
	dmfc1	$5,$f0
	lui	$2,%highest(.LC13)
	daddiu	$2,$2,%higher(.LC13)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC13)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC13)
	balc	printf
	lw	$2,40($fp)
	addiu	$2,$2,1
	sw	$2,40($fp)
.L4:
	lw	$3,184($fp)
	lw	$2,40($fp)
	bltc	$2,$3,.L5
	li	$4,10			
	balc	putchar
	daddiu	$3,$fp,160
	daddiu	$2,$fp,184
	move	$9,$3
	move	$8,$2
	ldc1	$f15,104($fp)
	ldc1	$f14,96($fp)
	ldc1	$f13,88($fp)
	ldc1	$f12,80($fp)
	balc	SolveCubic
	lui	$2,%highest(.LC12)
	daddiu	$2,$2,%higher(.LC12)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC12)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC12)
	balc	printf
	sw	$0,40($fp)
	bc	.L6
.L7:
	lw	$2,40($fp)
	dsll	$2,$2,3
	daddu	$2,$fp,$2
	ldc1	$f0,160($2)
	dmfc1	$5,$f0
	lui	$2,%highest(.LC13)
	daddiu	$2,$2,%higher(.LC13)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC13)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC13)
	balc	printf
	lw	$2,40($fp)
	addiu	$2,$2,1
	sw	$2,40($fp)
.L6:
	lw	$3,184($fp)
	lw	$2,40($fp)
	bltc	$2,$3,.L7
	li	$4,10			
	balc	putchar
	daddiu	$3,$fp,160
	daddiu	$2,$fp,184
	move	$9,$3
	move	$8,$2
	ldc1	$f15,136($fp)
	ldc1	$f14,128($fp)
	ldc1	$f13,120($fp)
	ldc1	$f12,112($fp)
	balc	SolveCubic
	lui	$2,%highest(.LC12)
	daddiu	$2,$2,%higher(.LC12)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC12)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC12)
	balc	printf
	sw	$0,40($fp)
	bc	.L8
.L9:
	lw	$2,40($fp)
	dsll	$2,$2,3
	daddu	$2,$fp,$2
	ldc1	$f0,160($2)
	dmfc1	$5,$f0
	lui	$2,%highest(.LC13)
	daddiu	$2,$2,%higher(.LC13)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC13)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC13)
	balc	printf
	lw	$2,40($fp)
	addiu	$2,$2,1
	sw	$2,40($fp)
.L8:
	lw	$3,184($fp)
	lw	$2,40($fp)
	bltc	$2,$3,.L9
	li	$4,10			
	balc	putchar
	lui	$2,%highest(.LC0)
	daddiu	$2,$2,%higher(.LC0)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC0)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC0)($2)
	sdc1	$f0,0($fp)
	bc	.L10
.L19:
	lui	$2,%highest(.LC14)
	daddiu	$2,$2,%higher(.LC14)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC14)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC14)($2)
	sdc1	$f0,8($fp)
	bc	.L11
.L18:
	lui	$2,%highest(.LC15)
	daddiu	$2,$2,%higher(.LC15)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC15)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC15)($2)
	sdc1	$f0,16($fp)
	bc	.L12
.L17:
	lui	$2,%highest(.LC16)
	daddiu	$2,$2,%higher(.LC16)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC16)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC16)($2)
	sdc1	$f0,24($fp)
	bc	.L13
.L16:
	daddiu	$3,$fp,160
	daddiu	$2,$fp,184
	move	$9,$3
	move	$8,$2
	ldc1	$f15,24($fp)
	ldc1	$f14,16($fp)
	ldc1	$f13,8($fp)
	ldc1	$f12,0($fp)
	balc	SolveCubic
	lui	$2,%highest(.LC12)
	daddiu	$2,$2,%higher(.LC12)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC12)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC12)
	balc	printf
	sw	$0,40($fp)
	bc	.L14
.L15:
	lw	$2,40($fp)
	dsll	$2,$2,3
	daddu	$2,$fp,$2
	ldc1	$f0,160($2)
	dmfc1	$5,$f0
	lui	$2,%highest(.LC13)
	daddiu	$2,$2,%higher(.LC13)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC13)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC13)
	balc	printf
	lw	$2,40($fp)
	addiu	$2,$2,1
	sw	$2,40($fp)
.L14:
	lw	$3,184($fp)
	lw	$2,40($fp)
	bltc	$2,$3,.L15
	li	$4,10			
	balc	putchar
	ldc1	$f1,24($fp)
	lui	$2,%highest(.LC0)
	daddiu	$2,$2,%higher(.LC0)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC0)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC0)($2)
	sub.d	$f0,$f1,$f0
	sdc1	$f0,24($fp)
.L13:
	ldc1	$f1,24($fp)
	lui	$2,%highest(.LC17)
	daddiu	$2,$2,%higher(.LC17)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC17)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC17)($2)
	cmp.lt.d	$f0,$f0,$f1
	bc1nez	$f0,.L16
	nop

	ldc1	$f1,16($fp)
	lui	$2,%highest(.LC18)
	daddiu	$2,$2,%higher(.LC18)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC18)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC18)($2)
	add.d	$f0,$f1,$f0
	sdc1	$f0,16($fp)
.L12:
	ldc1	$f1,16($fp)
	lui	$2,%highest(.LC19)
	daddiu	$2,$2,%higher(.LC19)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC19)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC19)($2)
	cmp.lt.d	$f0,$f1,$f0
	bc1nez	$f0,.L17
	nop

	ldc1	$f1,8($fp)
	lui	$2,%highest(.LC0)
	daddiu	$2,$2,%higher(.LC0)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC0)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC0)($2)
	sub.d	$f0,$f1,$f0
	sdc1	$f0,8($fp)
.L11:
	ldc1	$f0,8($fp)
	dmtc1	$0,$f1
	cmp.lt.d	$f0,$f1,$f0
	bc1nez	$f0,.L18
	nop

	ldc1	$f1,0($fp)
	lui	$2,%highest(.LC0)
	daddiu	$2,$2,%higher(.LC0)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC0)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC0)($2)
	add.d	$f0,$f1,$f0
	sdc1	$f0,0($fp)
.L10:
	ldc1	$f1,0($fp)
	lui	$2,%highest(.LC14)
	daddiu	$2,$2,%higher(.LC14)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC14)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC14)($2)
	cmp.lt.d	$f0,$f1,$f0
	bc1nez	$f0,.L19
	nop

	lui	$2,%highest(.LC20)
	daddiu	$2,$2,%higher(.LC20)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC20)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC20)
	balc	puts
	sw	$0,40($fp)
	bc	.L20
.L21:
	lw	$2,40($fp)
	daddiu	$3,$fp,192
	move	$5,$3
	move	$4,$2
	balc	usqrt
	lw	$3,192($fp)
	lw	$2,40($fp)
	move	$6,$3
	move	$5,$2
	lui	$2,%highest(.LC21)
	daddiu	$2,$2,%higher(.LC21)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC21)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC21)
	balc	printf
	lw	$2,40($fp)
	addiu	$2,$2,1
	sw	$2,40($fp)
.L20:
	lw	$2,40($fp)
	li	$3,1000			
	bgec	$3,$2,.L21
	daddiu	$2,$fp,192
	move	$5,$2
	ld	$4,144($fp)
	balc	usqrt
	lw	$2,192($fp)
	move	$6,$2
	ld	$5,144($fp)
	lui	$2,%highest(.LC22)
	daddiu	$2,$2,%higher(.LC22)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC22)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC22)
	balc	printf
	lui	$2,%highest(.LC23)
	daddiu	$2,$2,%higher(.LC23)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC23)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC23)
	balc	puts
	sd	$0,32($fp)
	bc	.L22
.L23:
	ldc1	$f1,32($fp)
	lui	$2,%highest(.LC24)
	daddiu	$2,$2,%higher(.LC24)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC24)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC24)($2)
	mul.d	$f1,$f1,$f0
	lui	$2,%highest(.LC25)
	daddiu	$2,$2,%higher(.LC25)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC25)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC25)($2)
	div.d	$f0,$f1,$f0
	dmfc1	$6,$f0
	ld	$5,32($fp)
	lui	$2,%highest(.LC26)
	daddiu	$2,$2,%higher(.LC26)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC26)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC26)
	balc	printf
	ldc1	$f1,32($fp)
	lui	$2,%highest(.LC0)
	daddiu	$2,$2,%higher(.LC0)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC0)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC0)($2)
	add.d	$f0,$f1,$f0
	sdc1	$f0,32($fp)
.L22:
	ldc1	$f1,32($fp)
	lui	$2,%highest(.LC27)
	daddiu	$2,$2,%higher(.LC27)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC27)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC27)($2)
	cmp.le.d	$f0,$f1,$f0
	bc1nez	$f0,.L23
	nop

	lui	$2,%highest(.LC28)
	daddiu	$2,$2,%higher(.LC28)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC28)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC28)
	balc	puts
	sd	$0,32($fp)
	bc	.L24
.L25:
	ldc1	$f1,32($fp)
	lui	$2,%highest(.LC25)
	daddiu	$2,$2,%higher(.LC25)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC25)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC25)($2)
	mul.d	$f1,$f1,$f0
	lui	$2,%highest(.LC24)
	daddiu	$2,$2,%higher(.LC24)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC24)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC24)($2)
	div.d	$f0,$f1,$f0
	dmfc1	$6,$f0
	ld	$5,32($fp)
	lui	$2,%highest(.LC29)
	daddiu	$2,$2,%higher(.LC29)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC29)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC29)
	balc	printf
	ldc1	$f1,32($fp)
	lui	$2,%highest(.LC30)
	daddiu	$2,$2,%higher(.LC30)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC30)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC30)($2)
	add.d	$f0,$f1,$f0
	sdc1	$f0,32($fp)
.L24:
	ldc1	$f1,32($fp)
	lui	$2,%highest(.LC31)
	daddiu	$2,$2,%higher(.LC31)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC31)
	dsll	$2,$2,16
	ldc1	$f0,%lo(.LC31)($2)
	cmp.le.d	$f0,$f1,$f0
	bc1nez	$f0,.L25
	nop

	move	$2,$0
	move	$sp,$fp
	ld	$31,216($sp)
	ld	$fp,208($sp)
	daddiu	$sp,$sp,224
	jrc	$31
