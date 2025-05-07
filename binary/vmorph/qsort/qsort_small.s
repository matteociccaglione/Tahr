compare:
	daddiu	$sp,$sp,-48
	sd	$31,40($sp)
	sd	$4,16($sp)
	sd	$5,24($sp)
	ld	$2,16($sp)
	ld	$3,24($sp)
	move	$5,$3
	move	$4,$2
	balc	strcmp
	sw	$2,0($sp)
	lw	$2,0($sp)
	bltzc	$2,.L2
	lw	$2,0($sp)
	bnezc	$2,.L3
	move	$2,$0
	bc	.L5
.L3:
	li	$2,-1			
	bc	.L5
.L2:
	li	$2,1			
.L5:
	ld	$31,40($sp)
	daddiu	$sp,$sp,48
	jrc	$31
	.rdata
.LC0:
	.ascii	"Usage: qsort_small <file>\012\000"
.LC1:
	.ascii	"r\000"
.LC2:
	.ascii	"%s\000"
.LC3:
	.ascii	"\012Sorting %d elements.\012\012\000"
	.text
	.globl	main
main:
	daddiu	$sp,$sp,-32752
	sd	$31,32744($sp)
	li	$3,7602176			
	ori	$3,$3,0xb040
	dsubu	$sp,$sp,$3
	move	$2,$4
	li	$3,7667712			# 0x750000
	daddu	$3,$sp,$3
	sd	$5,12312($3)
	sll	$2,$2,0
	li	$3,7667712			# 0x750000
	daddu	$3,$sp,$3
	sw	$2,12304($3)
	sw	$0,4($sp)
	li	$2,7667712			# 0x750000
	daddu	$2,$sp,$2
	lw	$2,12304($2)
	li	$3,1			# 0x1
	bltc	$3,$2,.L8
	lui	$2,%highest(stderr)
	daddiu	$2,$2,%higher(stderr)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(stderr)
	dsll	$2,$2,16
	ld	$2,%lo(stderr)($2)
	move	$7,$2
	li	$6,26			# 0x1a
	li	$5,1			# 0x1
	lui	$2,%highest(.LC0)
	daddiu	$2,$2,%higher(.LC0)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC0)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC0)
	balc	fwrite
	li	$4,-1			# 0xffffffffffffffff
	balc	exit
.L8:
	li	$2,7667712			# 0x750000
	daddu	$2,$sp,$2
	ld	$2,12312($2)
	daddiu	$2,$2,8
	ld	$3,0($2)
	lui	$2,%highest(.LC1)
	daddiu	$2,$2,%higher(.LC1)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC1)
	dsll	$2,$2,16
	daddiu	$5,$2,%lo(.LC1)
	move	$4,$3
	balc	fopen
	sd	$2,8($sp)
	bc	.L9
.L11:
	lw	$2,4($sp)
	addiu	$2,$2,1
	sw	$2,4($sp)
.L9:
	daddiu	$3,$sp,16
	lw	$2,4($sp)
	dsll	$2,$2,7
	daddu	$2,$3,$2
	move	$6,$2
	lui	$2,%highest(.LC2)
	daddiu	$2,$2,%higher(.LC2)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC2)
	dsll	$2,$2,16
	daddiu	$5,$2,%lo(.LC2)
	ld	$4,8($sp)
	balc	__isoc99_fscanf
	move	$3,$2
	li	$2,1			# 0x1
	bnec	$3,$2,.L10
	lw	$2,4($sp)
	li	$3,59999			# 0xea5f
	bgec	$3,$2,.L11
.L10:
	lw	$2,4($sp)
	move	$5,$2
	lui	$2,%highest(.LC3)
	daddiu	$2,$2,%higher(.LC3)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(.LC3)
	dsll	$2,$2,16
	daddiu	$4,$2,%lo(.LC3)
	balc	printf
	lw	$3,4($sp)
	daddiu	$4,$sp,16
	lui	$2,%highest(compare)
	daddiu	$2,$2,%higher(compare)
	dsll	$2,$2,16
	daddiu	$2,$2,%hi(compare)
	dsll	$2,$2,16
	daddiu	$7,$2,%lo(compare)
	li	$6,128			# 0x80
	move	$5,$3
	balc	qsort
	sw	$0,0($sp)
	bc	.L12
.L13:
	daddiu	$3,$sp,16
	lw	$2,0($sp)
	dsll	$2,$2,7
	daddu	$2,$3,$2
	move	$4,$2
	balc	puts
	lw	$2,0($sp)
	addiu	$2,$2,1
	sw	$2,0($sp)
.L12:
	lw	$3,0($sp)
	lw	$2,4($sp)
	bltc	$3,$2,.L13
	move	$2,$0
	li	$8,7602176			# 0x740000
	ori	$8,$8,0xb040
	daddu	$sp,$sp,$8
	ld	$31,32744($sp)
	daddiu	$sp,$sp,32752
	jrc	$31
	.set	macro
	.set	reorder
	.end	main
	.size	main, .-main
	.ident	"GCC: (GNU) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
