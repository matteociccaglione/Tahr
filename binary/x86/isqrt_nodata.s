.global usqrt
usqrt:
	daddiu	$sp,$sp,-64
	sd	$fp,56($sp)
	move	$fp,$sp
	sd	$4,32($fp)
	sd	$5,40($fp)
	sd	$0,24($fp)
	sd	$0,0($fp)
	sd	$0,16($fp)
	sw	$0,8($fp)
	bc	.L2
.L4:
	ld	$2,0($fp)
	dsll	$3,$2,2
	ld	$2,32($fp)
	dsrl	$2,$2,30
	andi	$2,$2,0x3
	daddu	$2,$3,$2
	sd	$2,0($fp)
	ld	$2,32($fp)
	dsll	$2,$2,2
	sd	$2,32($fp)
	ld	$2,24($fp)
	dsll	$2,$2,1
	sd	$2,24($fp)
	ld	$2,24($fp)
	dsll	$2,$2,1
	daddiu	$2,$2,1
	sd	$2,16($fp)
	ld	$3,0($fp)
	ld	$2,16($fp)
	bltuc	$3,$2,.L3
	ld	$3,0($fp)
	ld	$2,16($fp)
	dsubu	$2,$3,$2
	sd	$2,0($fp)
	ld	$2,24($fp)
	daddiu	$2,$2,1
	sd	$2,24($fp)
.L3:
	lw	$2,8($fp)
	addiu	$2,$2,1
	sw	$2,8($fp)
.L2:
	lw	$2,8($fp)
	li	$3,31			
	bgec	$3,$2,.L4
	ld	$3,24($fp)
	ld	$2,40($fp)
	sd	$3,0($2)
	nop
	move	$sp,$fp
	ld	$fp,56($sp)
	daddiu	$sp,$sp,64
	jrc	$31
