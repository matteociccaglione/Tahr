
	.data
.LC11:
	.ascii	"********* CUBIC FUNCTIONS ***********\000"
.LC12:
	.ascii	"Solutions:\000"
.LC13:
	.ascii	" %f\000"
.LC20:
	.ascii	"********* INTEGER SQR ROOTS ***********\000"
.LC21:
	.ascii	"sqrt(%3d) = %2d\012\000"
.LC22:
	.ascii	"\012sqrt(%lX) = %X\012\000"
.LC23:
	.ascii	"********* ANGLE CONVERSION ***********\000"
.LC26:
	.ascii	"%3.0f degrees = %.12f radians\012\000"
.LC28:
	.ascii	"\000"
.LC29:
	.ascii	"%.12f radians = %3.0f degrees\012\000"
.LC0:
	.long	1072693248
	.long	0
.LC1:
	.long	-1071316992
	.long	0
.LC2:
	.long	1077936128
	.long	0
.LC3:
	.long	-1069678592
	.long	0
.LC4:
	.long	-1072562176
	.long	0
.LC5:
	.long	1076953088
	.long	0
.LC6:
	.long	-1072955392
	.long	0
.LC7:
	.long	1077280768
	.long	0
.LC8:
	.long	-1069613056
	.long	0
.LC9:
	.long	-1070897562
	.long	1717986918
.LC10:
	.long	-1069449216
	.long	0
.LC14:
	.long	1076101120
	.long	0
.LC15:
	.long	1075052544
	.long	0
.LC16:
	.long	-1074790400
	.long	0
.LC17:
	.long	-1071251456
	.long	0
.LC18:
	.long	1071644672
	.long	0
.LC19:
	.long	1076756480
	.long	0
.LC24:
	.long	1074340347
	.long	1413754136
.LC25:
	.long	1080459264
	.long	0
.LC27:
	.long	1081507840
	.long	0
.LC30:
	.long	1066524486
	.long	-1571644103
.LC31:
	.long	1075388923
	.long	-1755313253
.text
.globl main
main:
xor %r12,%r12
pushq %rbp
addq $-224,%rsp
movq %r13,216(%rsp)
movq %rbp,208(%rsp)
movq %rsp,%rbp
movsd .LC0(%rip),%xmm4
movsd %xmm4,0(%rbp)
movsd .LC1(%rip),%xmm4
movsd %xmm4,8(%rbp)
movsd .LC2(%rip),%xmm4
movsd %xmm4,16(%rbp)
movsd .LC3(%rip),%xmm4
movsd %xmm4,24(%rbp)
movsd .LC0(%rip),%xmm4
movsd %xmm4,48(%rbp)
movsd .LC4(%rip),%xmm4
movsd %xmm4,56(%rbp)
movsd .LC5(%rip),%xmm4
movsd %xmm4,64(%rbp)
movsd .LC3(%rip),%xmm4
movsd %xmm4,72(%rbp)
movsd .LC0(%rip),%xmm4
movsd %xmm4,80(%rbp)
movsd .LC6(%rip),%xmm4
movsd %xmm4,88(%rbp)
movsd .LC7(%rip),%xmm4
movsd %xmm4,96(%rbp)
movsd .LC8(%rip),%xmm4
movsd %xmm4,104(%rbp)
movsd .LC0(%rip),%xmm4
movsd %xmm4,112(%rbp)
movsd .LC9(%rip),%xmm4
movsd %xmm4,120(%rbp)
movsd .LC0(%rip),%xmm4
movsd %xmm4,128(%rbp)
movsd .LC10(%rip),%xmm4
movsd %xmm4,136(%rbp)
movl $1072496640,%eax
orl $0x169,%eax
movq %rax,144(%rbp)
movq %r12,152(%rbp)
leaq .LC11(%rip),%rdi
call puts@PLT
movq %rbp,%r11
addq $160,%r11
movq %rbp,%rax
addq $184,%rax
movq %r11,%r8
movq %rax,%r14
movsd 24(%rbp),%xmm3
movsd 16(%rbp),%xmm2
movsd 8(%rbp),%xmm1
movsd 0(%rbp),%xmm0
call SolveCubic
leaq .LC12(%rip),%rdi
call printf@PLT
movl %r12d,40(%rbp)
jmp .L2
.L3:
movl 40(%rbp),%eax
movq %rax,%rax
shlq $3,%rax
addq %rbp,%rax
movsd 160(%rax),%xmm4
movq %xmm4,%rsi
leaq .LC13(%rip),%rdi
call printf@PLT
movl 40(%rbp),%eax
addl $1,%eax
movl %eax,40(%rbp)
.L2:
movl 184(%rbp),%r11d
movl 40(%rbp),%eax
cmpl %r11d,%eax
jl .L3
movl $10,%edi
call putchar
movq %rbp,%r11
addq $160,%r11
movq %rbp,%rax
addq $184,%rax
movq %r11,%r8
movq %rax,%r14
movsd 72(%rbp),%xmm3
movsd 64(%rbp),%xmm2
movsd 56(%rbp),%xmm1
movsd 48(%rbp),%xmm0
call SolveCubic
leaq .LC12(%rip),%rdi
call printf@PLT
movl %r12d,40(%rbp)
jmp .L4
.L5:
movl 40(%rbp),%eax
movq %rax,%rax
shlq $3,%rax
addq %rbp,%rax
movsd 160(%rax),%xmm4
movq %xmm4,%rsi
leaq .LC13(%rip),%rdi
call printf@PLT
movl 40(%rbp),%eax
addl $1,%eax
movl %eax,40(%rbp)
.L4:
movl 184(%rbp),%r11d
movl 40(%rbp),%eax
cmpl %r11d,%eax
jl .L5
movl $10,%edi
call putchar
movq %rbp,%r11
addq $160,%r11
movq %rbp,%rax
addq $184,%rax
movq %r11,%r8
movq %rax,%r14
movsd 104(%rbp),%xmm3
movsd 96(%rbp),%xmm2
movsd 88(%rbp),%xmm1
movsd 80(%rbp),%xmm0
call SolveCubic
leaq .LC12(%rip),%rdi
call printf@PLT
movl %r12d,40(%rbp)
jmp .L6
.L7:
movl 40(%rbp),%eax
movq %rax,%rax
shlq $3,%rax
addq %rbp,%rax
movsd 160(%rax),%xmm4
movq %xmm4,%rsi
leaq .LC13(%rip),%rdi
call printf@PLT
movl 40(%rbp),%eax
addl $1,%eax
movl %eax,40(%rbp)
.L6:
movl 184(%rbp),%r11d
movl 40(%rbp),%eax
cmpl %r11d,%eax
jl .L7
movl $10,%edi
call putchar
movq %rbp,%r11
addq $160,%r11
movq %rbp,%rax
addq $184,%rax
movq %r11,%r8
movq %rax,%r14
movsd 136(%rbp),%xmm3
movsd 128(%rbp),%xmm2
movsd 120(%rbp),%xmm1
movsd 112(%rbp),%xmm0
call SolveCubic
leaq .LC12(%rip),%rdi
call printf@PLT
movl %r12d,40(%rbp)
jmp .L8
.L9:
movl 40(%rbp),%eax
movq %rax,%rax
shlq $3,%rax
addq %rbp,%rax
movsd 160(%rax),%xmm4
movq %xmm4,%rsi
leaq .LC13(%rip),%rdi
call printf@PLT
movl 40(%rbp),%eax
addl $1,%eax
movl %eax,40(%rbp)
.L8:
movl 184(%rbp),%r11d
movl 40(%rbp),%eax
cmpl %r11d,%eax
jl .L9
movl $10,%edi
call putchar
movsd .LC0(%rip),%xmm4
movsd %xmm4,0(%rbp)
jmp .L10
.L19:
movsd .LC14(%rip),%xmm4
movsd %xmm4,8(%rbp)
jmp .L11
.L18:
movsd .LC15(%rip),%xmm4
movsd %xmm4,16(%rbp)
jmp .L12
.L17:
movsd .LC16(%rip),%xmm4
movsd %xmm4,24(%rbp)
jmp .L13
.L16:
movq %rbp,%r11
addq $160,%r11
movq %rbp,%rax
addq $184,%rax
movq %r11,%r8
movq %rax,%r14
movsd 24(%rbp),%xmm3
movsd 16(%rbp),%xmm2
movsd 8(%rbp),%xmm1
movsd 0(%rbp),%xmm0
call SolveCubic
leaq .LC12(%rip),%rdi
call printf@PLT
movl %r12d,40(%rbp)
jmp .L14
.L15:
movl 40(%rbp),%eax
movq %rax,%rax
shlq $3,%rax
addq %rbp,%rax
movsd 160(%rax),%xmm4
movq %xmm4,%rsi
leaq .LC13(%rip),%rdi
call printf@PLT
movl 40(%rbp),%eax
addl $1,%eax
movl %eax,40(%rbp)
.L14:
movl 184(%rbp),%r11d
movl 40(%rbp),%eax
cmpl %r11d,%eax
jl .L15
movl $10,%edi
call putchar
movsd 24(%rbp),%xmm5
movsd .LC0(%rip),%xmm4
subsd %xmm5,%xmm4
movsd %xmm4,24(%rbp)
.L13:
movsd 24(%rbp),%xmm5
movsd .LC17(%rip),%xmm4
comisd %xmm5,%xmm4
jge .L16
nop
movsd 16(%rbp),%xmm5
movsd .LC18(%rip),%xmm4
addsd %xmm5,%xmm4
movsd %xmm4,16(%rbp)
.L12:
movsd 16(%rbp),%xmm5
movsd .LC19(%rip),%xmm4
comisd %xmm4,%xmm5
jge .L17
nop
movsd 8(%rbp),%xmm5
movsd .LC0(%rip),%xmm4
subsd %xmm5,%xmm4
movsd %xmm4,8(%rbp)
.L11:
movsd 8(%rbp),%xmm4
movq %r12,%xmm5
comisd %xmm4,%xmm5
jge .L18
nop
movsd 0(%rbp),%xmm5
movsd .LC0(%rip),%xmm4
addsd %xmm5,%xmm4
movsd %xmm4,0(%rbp)
.L10:
movsd 0(%rbp),%xmm5
movsd .LC14(%rip),%xmm4
comisd %xmm4,%xmm5
jge .L19
nop
leaq .LC20(%rip),%rdi
call puts@PLT
movl %r12d,40(%rbp)
jmp .L20
.L21:
movl 40(%rbp),%eax
movq %rbp,%r11
addq $192,%r11
movq %r11,%rsi
movq %rax,%rdi
call usqrt
movl 192(%rbp),%r11d
movl 40(%rbp),%eax
movq %r11,%rdx
movq %rax,%rsi
leaq .LC21(%rip),%rdi
call printf@PLT
movl 40(%rbp),%eax
addl $1,%eax
movl %eax,40(%rbp)
.L20:
movl 40(%rbp),%eax
movl $1000,%r11d
cmpl %eax,%r11d
jge .L21
movq %rbp,%rax
addq $192,%rax
movq %rax,%rsi
movq 144(%rbp),%rdi
call usqrt
movl 192(%rbp),%eax
movq %rax,%rdx
movq 144(%rbp),%rsi
leaq .LC22(%rip),%rdi
call printf@PLT
leaq .LC23(%rip),%rdi
call puts@PLT
movq %r12,32(%rbp)
jmp .L22
.L23:
movsd 32(%rbp),%xmm5
movsd .LC24(%rip),%xmm4
movq %xmm4,%xmm5
mulsd %xmm5,%xmm5
movsd .LC25(%rip),%xmm4
movapd %xmm5,%xmm15
divsd %xmm4,%xmm15
movapd %xmm15,%xmm4
movq %xmm4,%rdx
movq 32(%rbp),%rsi
leaq .LC26(%rip),%rdi
call printf@PLT
movsd 32(%rbp),%xmm5
movsd .LC0(%rip),%xmm4
addsd %xmm5,%xmm4
movsd %xmm4,32(%rbp)
.L22:
movsd 32(%rbp),%xmm5
movsd .LC27(%rip),%xmm4
comisd %xmm4,%xmm5
jg .L23
nop
leaq .LC28(%rip),%rdi
call puts@PLT
movq %r12,32(%rbp)
jmp .L24
.L25:
movsd 32(%rbp),%xmm5
movsd .LC25(%rip),%xmm4
movq %xmm4,%xmm5
mulsd %xmm5,%xmm5
movsd .LC24(%rip),%xmm4
movapd %xmm5,%xmm15
divsd %xmm4,%xmm15
movapd %xmm15,%xmm4
movq %xmm4,%rdx
movq 32(%rbp),%rsi
leaq .LC29(%rip),%rdi
call printf@PLT
movsd 32(%rbp),%xmm5
movsd .LC30(%rip),%xmm4
addsd %xmm5,%xmm4
movsd %xmm4,32(%rbp)
.L24:
movsd 32(%rbp),%xmm5
movsd .LC31(%rip),%xmm4
comisd %xmm4,%xmm5
jg .L25
nop
movq %r12,%rax
movq %rbp,%rsp
movq 216(%rsp),%r13
movq 208(%rsp),%rbp
addq $224,%rsp
popq %rbp
ret
