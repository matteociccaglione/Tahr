.global usqrt
usqrt:
	daddiu	$sp,$sp,-64
	sd	$fp,56($sp)
	move	$fp,$sp
	sd	$a0,32($fp)
	sd	$a1,40($fp)
	sd	$zero,24($fp)
	sd	$zero,0($fp)
	sd	$zero,16($fp)
	sw	$zero,8($fp)
	bc	.L2
.L4:
	ld	$v0,0($fp)
	dsll	$v1,$v0,2
	ld	$v0,32($fp)
	dsrl	$v0,$v0,30
	andi	$v0,$v0,0x3
	daddu	$v0,$v1,$v0
	sd	$v0,0($fp)
	ld	$v0,32($fp)
	dsll	$v0,$v0,2
	sd	$v0,32($fp)
	ld	$v0,24($fp)
	dsll	$v0,$v0,1
	sd	$v0,24($fp)
	ld	$v0,24($fp)
	dsll	$v0,$v0,1
	daddiu	$v0,$v0,1
	sd	$v0,16($fp)
	ld	$v1,0($fp)
	ld	$v0,16($fp)
	bltuc	$v1,$v0,.L3
	ld	$v1,0($fp)
	ld	$v0,16($fp)
	dsubu	$v0,$v1,$v0
	sd	$v0,0($fp)
	ld	$v0,24($fp)
	daddiu	$v0,$v0,1
	sd	$v0,24($fp)
.L3:
	lw	$v0,8($fp)
	addiu	$v0,$v0,1
	sw	$v0,8($fp)
.L2:
	lw	$v0,8($fp)
	li	$v1,31			
	bgec	$v1,$v0,.L4
	ld	$v1,24($fp)
	ld	$v0,40($fp)
	sd	$v1,0($v0)
	nop
	move	$sp,$fp
	ld	$fp,56($sp)
	daddiu	$sp,$sp,64
	jrc	$ra
