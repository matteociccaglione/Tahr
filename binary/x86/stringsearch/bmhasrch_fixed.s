	.text
	.globl	bmha_init
bmha_init:
	daddiu	$sp,$sp,-48
	sd	$ra,40($sp)
	sd	$fp,32($sp)
	move	$fp,$sp
	sd	$a0,16($fp)
	ld	$v1,16($fp)
	lui	$v0,%highest(pat)
	daddiu	$v0,$v0,%higher(pat)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%hi(pat)
	dsll	$v0,$v0,16
	sd	$v1,%lo(pat)($v0)
	ld	$a0,16($fp)
	balc	strlen
	sll	$v0,$v0,0
	move	$v1,$v0
	lui	$v0,%highest(patlen)
	daddiu	$v0,$v0,%higher(patlen)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%hi(patlen)
	dsll	$v0,$v0,16
	sw	$v1,%lo(patlen)($v0)
	sw	$zero,0($fp)
	bc	.L2
.L9:
	lui	$v0,%highest(patlen)
	daddiu	$v0,$v0,%higher(patlen)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%hi(patlen)
	dsll	$v0,$v0,16
	lw	$v1,%lo(patlen)($v0)
	lui	$v0,%highest(skip)
	daddiu	$v0,$v0,%higher(skip)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%hi(skip)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%lo(skip)
	lw	$a0,0($fp)
	dsll	$a0,$a0,2
	daddu	$v0,$a0,$v0
	sw	$v1,0($v0)
	lui	$v0,%highest(patlen)
	daddiu	$v0,$v0,%higher(patlen)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%hi(patlen)
	dsll	$v0,$v0,16
	lw	$v0,%lo(patlen)($v0)
	addiu	$v0,$v0,-1
	sw	$v0,4($fp)
	bc	.L3
.L6:
	lw	$v0,0($fp)
	andi	$v0,$v0,0x00ff
	move	$v1,$v0
	lui	$v0,%highest(lowervec)
	daddiu	$v0,$v0,%higher(lowervec)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%hi(lowervec)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%lo(lowervec)
	daddu	$v0,$v1,$v0
	lbu	$v0,0($v0)
	lui	$v1,%highest(pat)
	daddiu	$v1,$v1,%higher(pat)
	dsll	$v1,$v1,16
	daddiu	$v1,$v1,%hi(pat)
	dsll	$v1,$v1,16
	ld	$a0,%lo(pat)($v1)
	lw	$v1,4($fp)
	daddu	$v1,$a0,$v1
	lbu	$v1,0($v1)
	move	$a0,$v1
	lui	$v1,%highest(lowervec)
	daddiu	$v1,$v1,%higher(lowervec)
	dsll	$v1,$v1,16
	daddiu	$v1,$v1,%hi(lowervec)
	dsll	$v1,$v1,16
	daddiu	$v1,$v1,%lo(lowervec)
	daddu	$v1,$a0,$v1
	lbu	$v1,0($v1)
	beqc	$v0,$v1,.L13
	lw	$v0,4($fp)
	addiu	$v0,$v0,-1
	sw	$v0,4($fp)
.L3:
	lw	$v0,4($fp)
	bgezc	$v0,.L6
	nop
	bc	.L5
.L13:
	nop
.L5:
	lw	$v0,4($fp)
	bltzc	$v0,.L7
	lui	$v0,%highest(patlen)
	daddiu	$v0,$v0,%higher(patlen)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%hi(patlen)
	dsll	$v0,$v0,16
	lw	$v1,%lo(patlen)($v0)
	lw	$v0,4($fp)
	subu	$v0,$v1,$v0
	addiu	$v0,$v0,-1
	move	$v1,$v0
	lui	$v0,%highest(skip)
	daddiu	$v0,$v0,%higher(skip)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%hi(skip)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%lo(skip)
	lw	$a0,0($fp)
	dsll	$a0,$a0,2
	daddu	$v0,$a0,$v0
	sw	$v1,0($v0)
.L7:
	lui	$v0,%highest(patlen)
	daddiu	$v0,$v0,%higher(patlen)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%hi(patlen)
	dsll	$v0,$v0,16
	lw	$v0,%lo(patlen)($v0)
	addiu	$v0,$v0,-1
	move	$v1,$v0
	lw	$v0,4($fp)
	bnec	$v0,$v1,.L8
	lui	$v0,%highest(skip)
	daddiu	$v0,$v0,%higher(skip)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%hi(skip)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%lo(skip)
	lw	$v1,0($fp)
	dsll	$v1,$v1,2
	daddu	$v0,$v1,$v0
	li	$v1,32767			
	sw	$v1,0($v0)
.L8:
	lw	$v0,0($fp)
	addiu	$v0,$v0,1
	sw	$v0,0($fp)
.L2:
	lw	$v0,0($fp)
	li	$v1,255			
	bgec	$v1,$v0,.L9
	lui	$v0,%highest(patlen)
	daddiu	$v0,$v0,%higher(patlen)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%hi(patlen)
	dsll	$v0,$v0,16
	lw	$v1,%lo(patlen)($v0)
	lui	$v0,%highest(skip2)
	daddiu	$v0,$v0,%higher(skip2)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%hi(skip2)
	dsll	$v0,$v0,16
	sw	$v1,%lo(skip2)($v0)
	sw	$zero,0($fp)
	bc	.L10
.L12:
	lui	$v0,%highest(pat)
	daddiu	$v0,$v0,%higher(pat)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%hi(pat)
	dsll	$v0,$v0,16
	ld	$v1,%lo(pat)($v0)
	lw	$v0,0($fp)
	daddu	$v0,$v1,$v0
	lbu	$v0,0($v0)
	move	$v1,$v0
	lui	$v0,%highest(lowervec)
	daddiu	$v0,$v0,%higher(lowervec)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%hi(lowervec)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%lo(lowervec)
	daddu	$v0,$v1,$v0
	lbu	$v0,0($v0)
	lui	$v1,%highest(pat)
	daddiu	$v1,$v1,%higher(pat)
	dsll	$v1,$v1,16
	daddiu	$v1,$v1,%hi(pat)
	dsll	$v1,$v1,16
	ld	$a0,%lo(pat)($v1)
	lui	$v1,%highest(patlen)
	daddiu	$v1,$v1,%higher(patlen)
	dsll	$v1,$v1,16
	daddiu	$v1,$v1,%hi(patlen)
	dsll	$v1,$v1,16
	lw	$v1,%lo(patlen)($v1)
	daddiu	$v1,$v1,-1
	daddu	$v1,$a0,$v1
	lbu	$v1,0($v1)
	move	$a0,$v1
	lui	$v1,%highest(lowervec)
	daddiu	$v1,$v1,%higher(lowervec)
	dsll	$v1,$v1,16
	daddiu	$v1,$v1,%hi(lowervec)
	dsll	$v1,$v1,16
	daddiu	$v1,$v1,%lo(lowervec)
	daddu	$v1,$a0,$v1
	lbu	$v1,0($v1)
	bnec	$v0,$v1,.L11
	lui	$v0,%highest(patlen)
	daddiu	$v0,$v0,%higher(patlen)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%hi(patlen)
	dsll	$v0,$v0,16
	lw	$v1,%lo(patlen)($v0)
	lw	$v0,0($fp)
	subu	$v0,$v1,$v0
	addiu	$v0,$v0,-1
	move	$v1,$v0
	lui	$v0,%highest(skip2)
	daddiu	$v0,$v0,%higher(skip2)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%hi(skip2)
	dsll	$v0,$v0,16
	sw	$v1,%lo(skip2)($v0)
.L11:
	lw	$v0,0($fp)
	addiu	$v0,$v0,1
	sw	$v0,0($fp)
.L10:
	lui	$v0,%highest(patlen)
	daddiu	$v0,$v0,%higher(patlen)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%hi(patlen)
	dsll	$v0,$v0,16
	lw	$v0,%lo(patlen)($v0)
	addiu	$v0,$v0,-1
	move	$v1,$v0
	lw	$v0,0($fp)
	bltc	$v0,$v1,.L12
	nop
	nop
	move	$sp,$fp
	ld	$ra,40($sp)
	ld	$fp,32($sp)
	daddiu	$sp,$sp,48
	jrc	$ra
	.globl	bmha_search
bmha_search:
	daddiu	$sp,$sp,-48
	sd	$fp,40($sp)
	move	$fp,$sp
	sd	$a0,16($fp)
	move	$v0,$a1
	sll	$v0,$v0,0
	sw	$v0,24($fp)
	lui	$v0,%highest(patlen)
	daddiu	$v0,$v0,%higher(patlen)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%hi(patlen)
	dsll	$v0,$v0,16
	lw	$v0,%lo(patlen)($v0)
	addiu	$v0,$v0,-1
	move	$v1,$v0
	lw	$v0,24($fp)
	subu	$v0,$v1,$v0
	sw	$v0,0($fp)
	lw	$v0,0($fp)
	bltzc	$v0,.L15
	move	$v0,$zero
	bc	.L16
.L15:
	lw	$v0,24($fp)
	ld	$v1,16($fp)
	daddu	$v0,$v1,$v0
	sd	$v0,16($fp)
.L23:
	nop
.L17:
	lw	$v0,0($fp)
	ld	$v1,16($fp)
	daddu	$v0,$v1,$v0
	lbu	$v0,0($v0)
	move	$v1,$v0
	lui	$v0,%highest(skip)
	daddiu	$v0,$v0,%higher(skip)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%hi(skip)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%lo(skip)
	dsll	$v1,$v1,2
	daddu	$v0,$v1,$v0
	lw	$v0,0($v0)
	lw	$v1,0($fp)
	addu	$v0,$v1,$v0
	sw	$v0,0($fp)
	lw	$v0,0($fp)
	bltzc	$v0,.L17
	li	$v1,32767			
	lw	$v0,24($fp)
	subu	$v0,$v1,$v0
	move	$v1,$v0
	lw	$v0,0($fp)
	bgec	$v0,$v1,.L18
	move	$v0,$zero
	bc	.L16
.L18:
	lw	$v0,0($fp)
	addiu	$v0,$v0,-32767
	sw	$v0,0($fp)
	lui	$v0,%highest(patlen)
	daddiu	$v0,$v0,%higher(patlen)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%hi(patlen)
	dsll	$v0,$v0,16
	lw	$v0,%lo(patlen)($v0)
	addiu	$v0,$v0,-1
	sw	$v0,4($fp)
	lw	$v1,0($fp)
	lw	$v0,4($fp)
	subu	$v0,$v1,$v0
	move	$v1,$v0
	ld	$v0,16($fp)
	daddu	$v0,$v0,$v1
	sd	$v0,8($fp)
	nop
.L20:
	lw	$v0,4($fp)
	addiu	$v0,$v0,-1
	sw	$v0,4($fp)
	lw	$v0,4($fp)
	bltzc	$v0,.L19
	lw	$v0,4($fp)
	ld	$v1,8($fp)
	daddu	$v0,$v1,$v0
	lb	$v0,0($v0)
	andi	$v0,$v0,0x00ff
	move	$v1,$v0
	lui	$v0,%highest(lowervec)
	daddiu	$v0,$v0,%higher(lowervec)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%hi(lowervec)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%lo(lowervec)
	daddu	$v0,$v1,$v0
	lbu	$v0,0($v0)
	lui	$v1,%highest(pat)
	daddiu	$v1,$v1,%higher(pat)
	dsll	$v1,$v1,16
	daddiu	$v1,$v1,%hi(pat)
	dsll	$v1,$v1,16
	ld	$a0,%lo(pat)($v1)
	lw	$v1,4($fp)
	daddu	$v1,$a0,$v1
	lbu	$v1,0($v1)
	move	$a0,$v1
	lui	$v1,%highest(lowervec)
	daddiu	$v1,$v1,%higher(lowervec)
	dsll	$v1,$v1,16
	daddiu	$v1,$v1,%hi(lowervec)
	dsll	$v1,$v1,16
	daddiu	$v1,$v1,%lo(lowervec)
	daddu	$v1,$a0,$v1
	lbu	$v1,0($v1)
	beqc	$v0,$v1,.L20
.L19:
	lw	$v0,4($fp)
	bgezc	$v0,.L21
	ld	$v0,8($fp)
	bc	.L16
.L21:
	lui	$v0,%highest(skip2)
	daddiu	$v0,$v0,%higher(skip2)
	dsll	$v0,$v0,16
	daddiu	$v0,$v0,%hi(skip2)
	dsll	$v0,$v0,16
	lw	$v0,%lo(skip2)($v0)
	lw	$v1,0($fp)
	addu	$v0,$v1,$v0
	sw	$v0,0($fp)
	lw	$v0,0($fp)
	bltzc	$v0,.L23
	move	$v0,$zero
.L16:
	move	$sp,$fp
	ld	$fp,40($sp)
	daddiu	$sp,$sp,48
	jrc	$ra
