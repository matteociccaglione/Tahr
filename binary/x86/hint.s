.data
.LC0:
	.string	"         _    _"
	.align 8
.LC1:
	.string	"         |    |  _ _   _ _____ TM"
	.align 8
.LC2:
	.string	"         |--  |  | |\\  | | | |"
.LC3:
	.string	"         |  --|  | | \\ |   |"
.LC4:
	.string	"         |    |  | |  \\|   |"
.LC5:
	.string	"         ^    ^  ^ ^   ^   ^\n"
	.align 8
.LC6:
	.string	"*** The  HINT  PERFORMANCE ANALYZER ***"
	.align 8
.LC7:
	.string	"   Version 1.0.1  June 1994-July 2022"
	.align 8
.LC8:
	.string	"   John L. Gustafson & Quinn O. Snell"
	.align 8
.LC9:
	.string	"     Scalable Computing Laboratory"
	.align 8
.LC10:
	.string	"   236 Wilhelm, Iowa State University"
	.align 8
.LC11:
	.string	"        Ames, Iowa    50011-3020"
.LC12:
	.string	"            (515) 294 - 9294\n"
.LC13:
	.string	"Copyright (C) 1994"
	.align 8
.LC14:
	.string	" Iowa State University Research Foundation, Inc."
	.align 8
.LC15:
	.string	"Modified for strict ANSI C compatibility 07/2022"
	.align 8
.LC16:
	.string	"Please send results and questions to: hint@scl.ameslab.gov"
	.align 8
.LC17:
	.string	"When sending results please follow the form in README"
	.align 8
.LC18:
	.string	"________________________________________________________"
	.align 8
.LC19:
	.string	"NOTE: This program does not take arguments."
.LC20:
	.string	"RECT is %d bytes\n"
.LC21:
	.string	"int"
.LC22:
	.string	"data/%s"
.LC23:
	.string	"w"
.LC24:
	.string	"Could not open data file"
	.align 8
.LC25:
	.string	"Apparent number of bits of accuracy: %d\n"
	.align 8
.LC26:
	.string	"Maximum associative whole number:    %.0f\n"
	.align 8
.LC27:
	.string	"Maximum number of bits of index:     %d\n"
	.align 8
.LC28:
	.string	"Maximum representable index:         %f \n\n"
	.align 8
.LC29:
	.string	"Index-limited data accuracy:         %d bits\n"
	.align 8
.LC30:
	.string	"Maximum usable whole number:         %.0f\n"
	.align 8
.LC31:
	.string	"Grid: %.0f wide by %.0f high.\n"
	.align 8
.LC33:
	.string	"Data type for %s is too small\n"
	.align 8
.LC34:
	.string	"Memory is not sufficient for > %3.1f second runs.\n"
	.align 8
.LC35:
	.string	"Precision is not sufficient for > %3.1f second runs.\n"
	.align 8
.LC39:
	.string	"\nThis run was memory limited at %d subintervals -> %d bytes\n"
	.align 8
.LC40:
	.string	"\nDone with first pass. Now computing net QUIPS"
.LC42:
	.string	"%12.10f %f %f %f %10d %f\n"
	.align 8
.LC43:
	.string	" Forcing a time for %d subintervals\n"
.LC44:
	.string	"\nFinished with %f net QUIPs\n"
.LC32:
	.long	1072693248
	.long	0
    .align 8
.LC36:
	.long	1072798105
	.long	-1717986918
    .align 8
.LC37:
	.long	1080950784
	.long	0
    .align 8
.LC38:
	.long	1069128089
	.long	-1717986918
    .align 8
.LC41:
	.long	1093664768
	.long	0
    .align 8
.LC45:
	.long	1184086197
	.long	-1257935337
    .align 8
.LC46:
	.long	-1073741824
	.long	0
    .align 8
.LC47:
	.long	1051772663
	.long	-1598689907
    .align 8
.text
.globl main
main:
pushq %rbp
xor %r12,%r12
addq $-6720,%rsp
movq %r13,6712(%rsp)
movq %rbp,6704(%rsp)
movq %rsp,%rbp
movq %rdi,%rax
movq %rsi,6696(%rbp)
movl %eax,%eax
shll $0,%eax
movl %eax,6688(%rbp)
leaq .LC0(%rip),%rdi
call puts@PLT
leaq .LC1(%rip),%rdi
call puts@PLT
leaq .LC2(%rip),%rdi
call puts@PLT
leaq .LC3(%rip),%rdi
call puts@PLT
leaq .LC4(%rip),%rdi
call puts@PLT
leaq .LC5(%rip),%rdi
call puts@PLT
leaq .LC6(%rip),%rdi
call puts@PLT
leaq .LC7(%rip),%rdi
call puts@PLT
leaq .LC8(%rip),%rdi
call puts@PLT
leaq .LC9(%rip),%rdi
call puts@PLT
leaq .LC10(%rip),%rdi
call puts@PLT
leaq .LC11(%rip),%rdi
call puts@PLT
leaq .LC12(%rip),%rdi
call puts@PLT
leaq .LC13(%rip),%rdi
call printf@PLT
leaq .LC14(%rip),%rdi
call puts@PLT
leaq .LC15(%rip),%rdi
call puts@PLT
leaq .LC16(%rip),%rdi
call puts@PLT
leaq .LC17(%rip),%rdi
call puts@PLT
leaq .LC18(%rip),%rdi
call puts@PLT
movl 6688(%rbp),%eax
movl $1,%r11d
cmpl %eax,%r11d
jge .L2
leaq .LC19(%rip),%rdi
call puts@PLT
.L2:
movl $36,%esi
leaq .LC20(%rip),%rdi
call printf@PLT
movq %rbp,%r11
addq $184,%r11
leaq .LC21(%rip),%rdx
leaq .LC22(%rip),%rsi
movq %r11,%rdi
call sprintf
movq %rbp,%r11
addq $184,%r11
leaq .LC23(%rip),%rsi
movq %r11,%rdi
call fopen@PLT
movq %rax,96(%rbp)
movq 96(%rbp),%rax
cmpl %eax,%r12d
jnz .L3
leaq .LC24(%rip),%rdi
call puts@PLT
movl $1,%edi
call exit
.L3:
call When
movsd %xmm0,104(%rbp)
nop
.L4:
call When
movsd %xmm0,112(%rbp)
movsd 112(%rbp),%xmm1
movsd 104(%rbp),%xmm0
comisd %xmm0,%xmm1
jnz .L4
nop
movsd 112(%rbp),%xmm1
movsd 104(%rbp),%xmm0
subsd %xmm1,%xmm0
movsd %xmm0,120(%rbp)
movl %r12d,72(%rbp)
movl $1,%eax
movl %eax,24(%rbp)
movl 24(%rbp),%eax
movl %eax,%eax
shll $1,%eax
movl %eax,28(%rbp)
movl 28(%rbp),%eax
addl $1,%eax
movl %eax,6672(%rbp)
jmp .L5
.L7:
movl 72(%rbp),%eax
addl $1,%eax
movl %eax,72(%rbp)
movl 24(%rbp),%eax
movl %eax,%eax
shll $1,%eax
movl %eax,24(%rbp)
movl 28(%rbp),%eax
movl %eax,%eax
shll $1,%eax
movl %eax,28(%rbp)
movl 28(%rbp),%eax
addl $1,%eax
movl %eax,6672(%rbp)
.L5:
movl 6672(%rbp),%eax
movq %rax,%r11
movl 28(%rbp),%eax
negl %eax
addl %r11d,%eax
movq %rax,%r11
movl $1,%eax
cmpl %r11d,%eax
jnz .L6
movl 28(%rbp),%eax
cmpl %r12d,%eax
jg .L7
.L6:
movl 72(%rbp),%eax
addl $1,%eax
movl %eax,72(%rbp)
movl 24(%rbp),%eax
addl $-1,%eax
movl 24(%rbp),%r11d
addl %r11d,%eax
movl %eax,12(%rbp)
movl 72(%rbp),%eax
movq %rax,%rsi
leaq .LC25(%rip),%rdi
call printf@PLT
movl 12(%rbp),%eax
movd %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm0
popq %rax
movq %xmm0,%rsi
leaq .LC26(%rip),%rdi
call printf@PLT
movl %r12d,76(%rbp)
movl $1,%eax
movl %eax,0(%rbp)
movl 0(%rbp),%eax
movl %eax,%eax
shll $1,%eax
movl %eax,6668(%rbp)
jmp .L8
.L9:
movl 76(%rbp),%eax
addl $1,%eax
movl %eax,76(%rbp)
movl 0(%rbp),%eax
movl %eax,%eax
shll $1,%eax
movl %eax,0(%rbp)
movl 6668(%rbp),%eax
movq %rax,%r11
movl 6668(%rbp),%eax
addl %r11d,%eax
movl %eax,6668(%rbp)
.L8:
movl 6668(%rbp),%eax
cmpl %r12d,%eax
jg .L9
movl 0(%rbp),%eax
movl %eax,128(%rbp)
movl 76(%rbp),%eax
movq %rax,%rsi
leaq .LC27(%rip),%rdi
call printf@PLT
movl 128(%rbp),%eax
movd %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm0
popq %rax
movq %xmm0,%rsi
leaq .LC28(%rip),%rdi
call printf@PLT
movl 76(%rbp),%eax
movl %eax,%eax
shll $1,%eax
movq %rax,%r11
movl 72(%rbp),%eax
cmpl %eax,%r11d
jge .L10
movl 128(%rbp),%eax
pushq %rdx
xorq %rdx,%rdx
movl %eax,%eax
mull %eax
movl %eax,%eax
popq %rdx
addl $-1,%eax
movl %eax,12(%rbp)
movl 76(%rbp),%eax
movl %eax,%eax
shll $1,%eax
movl %eax,72(%rbp)
.L10:
movl 72(%rbp),%eax
movq %rax,%rsi
leaq .LC29(%rip),%rdi
call printf@PLT
movl 12(%rbp),%eax
movd %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm0
popq %rax
movq %xmm0,%rsi
leaq .LC30(%rip),%rdi
call printf@PLT
movl 72(%rbp),%eax
movl %eax,%r11d
shrl $31,%r11d
addl %r11d,%eax
movl %eax,%eax
sarl $1,%eax
movl %eax,84(%rbp)
movl %r12d,80(%rbp)
movl $1,%eax
movl %eax,16(%rbp)
jmp .L11
.L12:
movl 16(%rbp),%eax
movl %eax,%eax
shll $1,%eax
movl %eax,16(%rbp)
movl 80(%rbp),%eax
addl $1,%eax
movl %eax,80(%rbp)
.L11:
movl 80(%rbp),%r11d
movl 84(%rbp),%eax
cmpl %eax,%r11d
jb .L12
movl %r12d,80(%rbp)
movl $1,%eax
movl %eax,20(%rbp)
jmp .L13
.L14:
movl 20(%rbp),%eax
movl %eax,%eax
shll $1,%eax
movl %eax,20(%rbp)
movl 80(%rbp),%eax
addl $1,%eax
movl %eax,80(%rbp)
.L13:
movl 72(%rbp),%r11d
movl 84(%rbp),%eax
negl %eax
addl %r11d,%eax
movq %rax,%r11
movl 80(%rbp),%eax
cmpl %r11d,%eax
jb .L14
movl 16(%rbp),%eax
movd %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm0
popq %rax
movl 20(%rbp),%eax
movd %rax,%xmm1
pushq %rax
movd %xmm1,%rax
cvtsi2sd %rax,%xmm1
popq %rax
movq %xmm1,%rdx
movq %xmm0,%rsi
leaq .LC31(%rip),%rdi
call printf@PLT
movq %r12,64(%rbp)
movl $2,%eax
movl %eax,8(%rbp)
movl $3,%eax
movl %eax,132(%rbp)
jmp .L15
.L20:
movq %rbp,%rcx
addq $6664,%rcx
movl 8(%rbp),%edx
movl 12(%rbp),%esi
movl 20(%rbp),%edi
movl 16(%rbp),%r11d
movq %rbp,%r10
addq $6676,%r10
movl 132(%rbp),%eax
movq %rcx,%r9
movq %rdx,%r8
movq %rsi,%rbx
movq %rdi,%rcx
movq %r11,%rdx
movq %r10,%rsi
movq %rax,%rdi
call Run
movsd %xmm0,56(%rbp)
movl 6664(%rbp),%eax
cmpl %eax,%r12d
jz .L16
movl 8(%rbp),%eax
movl %eax,%r11d
shrl $31,%r11d
addl %r11d,%eax
movl %eax,%eax
sarl $1,%eax
movl %eax,8(%rbp)
jmp .L17
.L16:
movsd 56(%rbp),%xmm1
movsd .LC32(%rip),%xmm0
comisd %xmm1,%xmm0
jb .L18
nop
movl 6664(%rbp),%eax
cmpl %eax,%r12d
jnz .L18
movsd 56(%rbp),%xmm0
movsd %xmm0,64(%rbp)
jmp .L17
.L18:
movsd 56(%rbp),%xmm0
movsd %xmm0,64(%rbp)
movl 8(%rbp),%eax
movl %eax,%eax
shll $1,%eax
movl %eax,8(%rbp)
movl 8(%rbp),%eax
movl 16(%rbp),%r11d
cmpl %eax,%r11d
jge .L15
movl 8(%rbp),%eax
movl %eax,%r11d
shrl $31,%r11d
addl %r11d,%eax
movl %eax,%eax
sarl $1,%eax
movl %eax,8(%rbp)
jmp .L17
.L15:
movl 8(%rbp),%r11d
movl 16(%rbp),%eax
cmpl %eax,%r11d
jb .L20
.L17:
movsd 64(%rbp),%xmm0
movq %r12,%xmm1
ucomisd %xmm1,%xmm0
jz .L21
jp .L21
nop
movq 6696(%rbp),%rax
movq 0(%rax),%rax
movq %rax,%rsi
leaq .LC33(%rip),%rdi
call printf@PLT
movq %r12,%rdi
call exit
.L21:
movsd 64(%rbp),%xmm1
movsd .LC32(%rip),%xmm0
comisd %xmm0,%xmm1
jb .L22
nop
movl 6664(%rbp),%r11d
movl $2,%eax
cmpl %r11d,%eax
jnz .L22
movsd .LC32(%rip),%xmm0
movq %xmm0,%rsi
leaq .LC34(%rip),%rdi
call printf@PLT
jmp .L24
.L22:
movsd 64(%rbp),%xmm1
movsd .LC32(%rip),%xmm0
comisd %xmm0,%xmm1
jb .L24
nop
movsd .LC32(%rip),%xmm0
movq %xmm0,%rsi
leaq .LC35(%rip),%rdi
call printf@PLT
.L24:
movq %r12,56(%rbp)
movl %r12d,80(%rbp)
movl $2,%eax
movl %eax,4(%rbp)
movq %r12,40(%rbp)
movsd .LC32(%rip),%xmm0
movsd %xmm0,48(%rbp)
jmp .L26
.L39:
movl $46,%edi
call putchar
leaq stdout(%rip),%rax
movq %rax,%rdi
call fflush@PLT
movl 8(%rbp),%eax
movd %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm1
popq %rax
movl 4(%rbp),%eax
movd %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm2
popq %rax
movsd 64(%rbp),%xmm0
movq %xmm0,%xmm0
mulsd %xmm2,%xmm0
divsd %xmm0,%xmm1
movsd .LC32(%rip),%xmm0
comisd %xmm1,%xmm0
jb .L69
nop
movl 8(%rbp),%eax
movd %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm1
popq %rax
movl 4(%rbp),%eax
movd %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm2
popq %rax
movsd 64(%rbp),%xmm0
movq %xmm0,%xmm0
mulsd %xmm2,%xmm0
movapd %xmm1,%xmm15
divsd %xmm0,%xmm15
movapd %xmm15,%xmm0
pushq %rax
cvttsd2si %xmm0,%rax
movd %rax,%xmm0
popq %rax
movd %xmm0,%rax
jmp .L29
.L69:
movl $1,%eax
.L29:
movl %eax,132(%rbp)
movq %rbp,%rcx
addq $6664,%rcx
movl 4(%rbp),%edx
movl 12(%rbp),%esi
movl 20(%rbp),%edi
movl 16(%rbp),%r11d
movq %rbp,%r10
addq $6676,%r10
movl 132(%rbp),%eax
movq %rcx,%r9
movq %rdx,%r8
movq %rsi,%rbx
movq %rdi,%rcx
movq %r11,%rdx
movq %r10,%rsi
movq %rax,%rdi
call Run
movsd %xmm0,56(%rbp)
movsd 56(%rbp),%xmm0
movq %r12,%xmm1
ucomisd %xmm1,%xmm0
jz .L30
jp .L30
nop
movsd 120(%rbp),%xmm0
movsd %xmm0,56(%rbp)
.L30:
movl 6664(%rbp),%eax
cmpl %eax,%r12d
jnz .L72
movl 12(%rbp),%eax
movd %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm1
popq %rax
movl 6676(%rbp),%eax
movq %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm0
popq %rax
divsd %xmm0,%xmm1
movsd .LC32(%rip),%xmm0
subsd %xmm1,%xmm0
movsd %xmm0,136(%rbp)
movsd 136(%rbp),%xmm1
movsd 56(%rbp),%xmm0
divsd %xmm0,%xmm1
movl 6676(%rbp),%eax
movq %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm0
popq %rax
movsd .LC32(%rip),%xmm2
divsd %xmm0,%xmm2
movsd 56(%rbp),%xmm0
movapd %xmm2,%xmm15
divsd %xmm0,%xmm15
movapd %xmm15,%xmm0
addsd %xmm1,%xmm0
movsd %xmm0,144(%rbp)
movl 80(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 56(%rbp),%xmm0
movsd %xmm0,264(%rax)
movl 80(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 144(%rbp),%xmm0
movsd %xmm0,272(%rax)
movl 80(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 136(%rbp),%xmm0
movsd %xmm0,280(%rax)
movl 80(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movl 4(%rbp),%r11d
movl %r11d,288(%rax)
movsd 40(%rbp),%xmm1
movsd 144(%rbp),%xmm0
comisd %xmm1,%xmm0
jb .L70
nop
movsd 40(%rbp),%xmm0
jmp .L35
.L70:
movsd 144(%rbp),%xmm0
.L35:
movsd %xmm0,40(%rbp)
movsd 144(%rbp),%xmm1
movsd 40(%rbp),%xmm0
movapd %xmm1,%xmm15
divsd %xmm0,%xmm15
movapd %xmm15,%xmm0
movsd %xmm0,48(%rbp)
movl 80(%rbp),%eax
addl $1,%eax
movl %eax,80(%rbp)
movl 4(%rbp),%eax
movd %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm1
popq %rax
movsd .LC36(%rip),%xmm0
movq %xmm0,%xmm0
mulsd %xmm1,%xmm0
pushq %rax
cvttsd2si %xmm0,%rax
movd %rax,%xmm0
popq %rax
movd %xmm0,%rax
movq %rax,%r11
movl 4(%rbp),%eax
cmpl %r11d,%eax
jge .L36
movl 4(%rbp),%eax
movd %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm1
popq %rax
movsd .LC36(%rip),%xmm0
movq %xmm0,%xmm0
mulsd %xmm1,%xmm0
pushq %rax
cvttsd2si %xmm0,%rax
movd %rax,%xmm0
popq %rax
movd %xmm0,%rax
jmp .L37
.L36:
movl 4(%rbp),%eax
addl $1,%eax
movq %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm0
popq %rax
pushq %rax
cvttsd2si %xmm0,%rax
movd %rax,%xmm0
popq %rax
movd %xmm0,%rax
.L37:
movl %eax,4(%rbp)
.L26:
movl 80(%rbp),%eax
movl $199,%r11d
cmpl %eax,%r11d
jb .L32
movsd 56(%rbp),%xmm1
movsd .LC37(%rip),%xmm0
comisd %xmm0,%xmm1
jb .L32
nop
movl 4(%rbp),%r11d
movl 16(%rbp),%eax
cmpl %eax,%r11d
jge .L32
movsd 48(%rbp),%xmm1
movsd .LC38(%rip),%xmm0
comisd %xmm1,%xmm0
jge .L39
nop
jmp .L32
.L72:
nop
.L32:
movl 80(%rbp),%eax
addl $-1,%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movl 288(%rax),%eax
movq %rax,%r11
movq %r11,%rax
movl %eax,%eax
shll $2,%eax
addl %r11d,%eax
movl %eax,%eax
shll $1,%eax
addl %r11d,%eax
movl %eax,%eax
shll $2,%eax
movl %eax,152(%rbp)
movsd 48(%rbp),%xmm1
movsd .LC38(%rip),%xmm0
comisd %xmm1,%xmm0
jb .L40
nop
movl 6664(%rbp),%r11d
movl $2,%eax
cmpl %r11d,%eax
jnz .L40
movl 152(%rbp),%r11d
movl 4(%rbp),%eax
movq %r11,%rdx
movq %rax,%rsi
leaq .LC39(%rip),%rdi
call printf@PLT
.L40:
leaq .LC40(%rip),%rdi
call puts@PLT
movl 80(%rbp),%eax
addl $-1,%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movl 288(%rax),%eax
movq %rax,%r11
movq %r11,%rax
movq %rax,%rax
shlq $2,%rax
addq %r11,%rax
movq %rax,%r11
shlq $2,%r11
addq %r11,%rax
movq %rax,%rax
shlq $4,%rax
cmpl %r12d,%eax
jb .L43
movq %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm0
popq %rax
jmp .L42
.L43:
movl %eax,%r11d
andl $1,%r11d
movq %rax,%rax
shrq $1,%rax
orl %eax,%r11d
movq %r11,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm0
popq %rax
addsd %xmm0,%xmm0
.L42:
movsd %xmm0,160(%rbp)
movsd 160(%rbp),%xmm1
movsd .LC41(%rip),%xmm0
movapd %xmm1,%xmm15
divsd %xmm0,%xmm15
movapd %xmm15,%xmm0
movsd %xmm0,160(%rbp)
movl 80(%rbp),%eax
addl $-1,%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 264(%rax),%xmm0
movsd 160(%rbp),%xmm1
movapd %xmm1,%xmm15
divsd %xmm0,%xmm15
movapd %xmm15,%xmm0
movsd %xmm0,168(%rbp)
movl 80(%rbp),%eax
addl $-1,%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 264(%rax),%xmm0
movl 80(%rbp),%eax
addl $-1,%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 272(%rax),%xmm1
movl 80(%rbp),%eax
addl $-1,%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 280(%rax),%xmm2
movl 80(%rbp),%eax
addl $-1,%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movl 288(%rax),%eax
movq %rax,%xmm3
pushq %rax
movd %xmm3,%rax
cvtsi2sd %rax,%xmm3
popq %rax
movl 152(%rbp),%eax
movq 168(%rbp),%r10
movq %rax,%r9
movq %xmm3,%r8
movq %xmm2,%rbx
movq %xmm1,%rcx
movq %xmm0,%rdx
leaq .LC42(%rip),%rsi
movq 96(%rbp),%rdi
call fprintf@PLT
movl 80(%rbp),%eax
addl $-1,%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 272(%rax),%xmm0
movsd %xmm0,32(%rbp)
movl 80(%rbp),%eax
addl $-2,%eax
movl %eax,84(%rbp)
jmp .L44
.L57:
movl %r12d,88(%rbp)
jmp .L45
.L52:
movl $35,%edi
call putchar
movl 8(%rbp),%eax
movd %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm1
popq %rax
movl 84(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movl 288(%rax),%eax
movq %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm2
popq %rax
movsd 64(%rbp),%xmm0
movq %xmm0,%xmm0
mulsd %xmm2,%xmm0
divsd %xmm0,%xmm1
movsd .LC32(%rip),%xmm0
comisd %xmm1,%xmm0
jb .L71
nop
movl 8(%rbp),%eax
movd %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm1
popq %rax
movl 84(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movl 288(%rax),%eax
movq %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm2
popq %rax
movsd 64(%rbp),%xmm0
movq %xmm0,%xmm0
mulsd %xmm2,%xmm0
movapd %xmm1,%xmm15
divsd %xmm0,%xmm15
movapd %xmm15,%xmm0
pushq %rax
cvttsd2si %xmm0,%rax
movd %rax,%xmm0
popq %rax
movd %xmm0,%rax
jmp .L48
.L71:
movl $1,%eax
.L48:
movl %eax,132(%rbp)
movl 84(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movl 288(%rax),%edx
movq %rbp,%rcx
addq $6664,%rcx
movl 12(%rbp),%esi
movl 20(%rbp),%edi
movl 16(%rbp),%r11d
movq %rbp,%r10
addq $6676,%r10
movl 132(%rbp),%eax
movq %rcx,%r9
movq %rdx,%r8
movq %rsi,%rbx
movq %rdi,%rcx
movq %r11,%rdx
movq %r10,%rsi
movq %rax,%rdi
call Run
movsd %xmm0,56(%rbp)
movsd 56(%rbp),%xmm0
movq %r12,%xmm1
ucomisd %xmm1,%xmm0
jz .L49
jp .L49
nop
movsd 120(%rbp),%xmm0
movsd %xmm0,56(%rbp)
.L49:
movl 12(%rbp),%eax
movd %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm1
popq %rax
movl 6676(%rbp),%eax
movq %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm0
popq %rax
divsd %xmm0,%xmm1
movsd .LC32(%rip),%xmm0
subsd %xmm1,%xmm0
movsd %xmm0,136(%rbp)
movsd 136(%rbp),%xmm1
movsd 56(%rbp),%xmm0
divsd %xmm0,%xmm1
movl 6676(%rbp),%eax
movq %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm0
popq %rax
movsd .LC32(%rip),%xmm2
divsd %xmm0,%xmm2
movsd 56(%rbp),%xmm0
movapd %xmm2,%xmm15
divsd %xmm0,%xmm15
movapd %xmm15,%xmm0
addsd %xmm1,%xmm0
movsd %xmm0,144(%rbp)
movl 84(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 56(%rbp),%xmm0
movsd %xmm0,264(%rax)
movl 84(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 144(%rbp),%xmm0
movsd %xmm0,272(%rax)
movl 88(%rbp),%eax
addl $1,%eax
movl %eax,88(%rbp)
.L45:
movl 84(%rbp),%eax
addl $1,%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 264(%rax),%xmm1
movl 84(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 264(%rax),%xmm0
comisd %xmm0,%xmm1
jb .L50
nop
movl 88(%rbp),%eax
movl $12,%r11d
cmpl %eax,%r11d
jge .L52
.L50:
movl 84(%rbp),%eax
addl $1,%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 264(%rax),%xmm1
movl 84(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 264(%rax),%xmm0
comisd %xmm0,%xmm1
jb .L53
nop
movl 84(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movl 288(%rax),%eax
movq %rax,%rsi
leaq .LC43(%rip),%rdi
call printf@PLT
movl 84(%rbp),%eax
addl $1,%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 264(%rax),%xmm0
movl 84(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd %xmm0,264(%rax)
movl 12(%rbp),%eax
movd %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm1
popq %rax
movl 6676(%rbp),%eax
movq %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm0
popq %rax
divsd %xmm0,%xmm1
movsd .LC32(%rip),%xmm0
subsd %xmm1,%xmm0
movsd %xmm0,136(%rbp)
movl 84(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 264(%rax),%xmm0
movsd 136(%rbp),%xmm1
divsd %xmm0,%xmm1
movl 6676(%rbp),%eax
movq %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm0
popq %rax
movsd .LC32(%rip),%xmm2
divsd %xmm0,%xmm2
movl 84(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 264(%rax),%xmm0
movapd %xmm2,%xmm15
divsd %xmm0,%xmm15
movapd %xmm15,%xmm0
addsd %xmm1,%xmm0
movl 84(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd %xmm0,272(%rax)
.L53:
movl 84(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movl 288(%rax),%eax
movq %rax,%r11
movq %r11,%rax
movl %eax,%eax
shll $2,%eax
addl %r11d,%eax
movl %eax,%eax
shll $1,%eax
addl %r11d,%eax
movl %eax,%eax
shll $2,%eax
movl %eax,152(%rbp)
movl 84(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movl 288(%rax),%eax
movq %rax,%r11
movq %r11,%rax
movq %rax,%rax
shlq $2,%rax
addq %r11,%rax
movq %rax,%r11
shlq $2,%r11
addq %r11,%rax
movq %rax,%rax
shlq $4,%rax
cmpl %r12d,%eax
jb .L56
movq %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm0
popq %rax
jmp .L55
.L56:
movl %eax,%r11d
andl $1,%r11d
movq %rax,%rax
shrq $1,%rax
orl %eax,%r11d
movq %r11,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm0
popq %rax
addsd %xmm0,%xmm0
.L55:
movsd %xmm0,160(%rbp)
movsd 160(%rbp),%xmm1
movsd .LC41(%rip),%xmm0
movapd %xmm1,%xmm15
divsd %xmm0,%xmm15
movapd %xmm15,%xmm0
movsd %xmm0,160(%rbp)
movl 84(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 264(%rax),%xmm0
movsd 160(%rbp),%xmm1
movapd %xmm1,%xmm15
divsd %xmm0,%xmm15
movapd %xmm15,%xmm0
movsd %xmm0,168(%rbp)
movl 84(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 264(%rax),%xmm0
movl 84(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 272(%rax),%xmm1
movl 84(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 280(%rax),%xmm2
movl 84(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movl 288(%rax),%eax
movq %rax,%xmm3
pushq %rax
movd %xmm3,%rax
cvtsi2sd %rax,%xmm3
popq %rax
movl 152(%rbp),%eax
movq 168(%rbp),%r10
movq %rax,%r9
movq %xmm3,%r8
movq %xmm2,%rbx
movq %xmm1,%rcx
movq %xmm0,%rdx
leaq .LC42(%rip),%rsi
movq 96(%rbp),%rdi
call fprintf@PLT
movl 84(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 272(%rax),%xmm1
movl 84(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 264(%rax),%xmm0
movq %xmm0,%xmm1
mulsd %xmm1,%xmm1
movl 84(%rbp),%eax
addl $1,%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 264(%rax),%xmm0
movapd %xmm1,%xmm15
divsd %xmm0,%xmm15
movapd %xmm15,%xmm0
movsd %xmm0,176(%rbp)
movl 84(%rbp),%eax
movq %rax,%rax
shlq $5,%rax
addq %rbp,%rax
movsd 272(%rax),%xmm1
movsd 176(%rbp),%xmm0
subsd %xmm1,%xmm0
movsd 32(%rbp),%xmm1
addsd %xmm1,%xmm0
movsd %xmm0,32(%rbp)
movl 84(%rbp),%eax
addl $-1,%eax
movl %eax,84(%rbp)
.L44:
movl 84(%rbp),%eax
cmpl %r12d,%eax
jge .L57
movq 32(%rbp),%rsi
leaq .LC44(%rip),%rdi
call printf@PLT
movq 96(%rbp),%rdi
call fclose@PLT
movq %r12,%rax
movq %rbp,%rsp
movq 6712(%rsp),%r13
movq 6704(%rsp),%rbp
addq $6720,%rsp
ret
.globl Run
Run:
addq $-128,%rsp
movq %r13,120(%rsp)
movq %rbp,112(%rsp)
movq %rsp,%rbp
movq %rdi,%r10
movq %rsi,72(%rbp)
movq %rdx,%rsi
movq %rcx,%rdi
movq %rbx,%r11
movq %r8,%rax
movq %r9,96(%rbp)
movl %r10d,%edx
shll $0,%edx
movl %edx,64(%rbp)
movl %esi,%esi
shll $0,%esi
movl %esi,68(%rbp)
movl %edi,%edi
shll $0,%edi
movl %edi,80(%rbp)
movl %r11d,%r11d
shll $0,%r11d
movl %r11d,84(%rbp)
movl %eax,%eax
shll $0,%eax
movl %eax,88(%rbp)
movq %r12,16(%rbp)
movq %r12,24(%rbp)
movq %r12,32(%rbp)
movsd .LC45(%rip),%xmm0
movsd %xmm0,8(%rbp)
movq 96(%rbp),%rax
movl %r12d,0(%rax)
movl 88(%rbp),%eax
movq %rax,%r11
movq %r11,%rax
movl %eax,%eax
shll $3,%eax
addl %r11d,%eax
movl %eax,%eax
shll $2,%eax
movq %rax,%rdi
call malloc@PLT
movq %rax,16(%rbp)
movl 88(%rbp),%eax
movl %eax,%eax
shll $3,%eax
movq %rax,%rdi
call malloc@PLT
movq %rax,32(%rbp)
movl 88(%rbp),%eax
movl %eax,%eax
shll $3,%eax
movq %rax,%rdi
call malloc@PLT
movq %rax,24(%rbp)
movq 16(%rbp),%rax
cmpl %eax,%r12d
jz .L74
movq 32(%rbp),%rax
cmpl %eax,%r12d
jz .L74
movq 24(%rbp),%rax
cmpl %eax,%r12d
jnz .L75
.L74:
movq 16(%rbp),%rax
cmpl %eax,%r12d
jz .L76
movq 16(%rbp),%rdi
call free@PLT
.L76:
movq 32(%rbp),%rax
cmpl %eax,%r12d
jz .L77
movq 32(%rbp),%rdi
call free@PLT
.L77:
movq 24(%rbp),%rax
cmpl %eax,%r12d
jz .L78
movq 24(%rbp),%rdi
call free@PLT
.L78:
movq 96(%rbp),%rax
movl $2,%r11d
movl %r11d,0(%rax)
movsd .LC46(%rip),%xmm0
jmp .L79
.L75:
movl %r12d,0(%rbp)
jmp .L80
.L86:
call When
movsd %xmm0,40(%rbp)
movl %r12d,4(%rbp)
jmp .L81
.L82:
movq %rbp,%rsi
addq $88,%rsi
movq %rbp,%rdi
addq $84,%rdi
movq %rbp,%r11
addq $80,%r11
movq %rbp,%rax
addq $68,%rax
movq 96(%rbp),%r10
movq 24(%rbp),%r9
movq 32(%rbp),%r8
movq 16(%rbp),%rbx
movq %rsi,%rcx
movq %rdi,%rdx
movq %r11,%rsi
movq %rax,%rdi
call Hint
movq %rax,%r11
movq 72(%rbp),%rax
movl %r11d,0(%rax)
movl 4(%rbp),%eax
addl $1,%eax
movl %eax,4(%rbp)
.L81:
movl 4(%rbp),%r11d
movl 64(%rbp),%eax
cmpl %eax,%r11d
jb .L82
nop
call When
movsd %xmm0,48(%rbp)
movsd 48(%rbp),%xmm1
movsd 40(%rbp),%xmm0
movapd %xmm0,%xmm15
subsd %xmm1,%xmm15
movapd %xmm15,%xmm1
movl 64(%rbp),%eax
movd %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm0
popq %rax
movapd %xmm1,%xmm15
divsd %xmm0,%xmm15
movapd %xmm15,%xmm0
movsd %xmm0,56(%rbp)
movsd 8(%rbp),%xmm1
movsd 56(%rbp),%xmm0
comisd %xmm1,%xmm0
jb .L88
nop
movsd 56(%rbp),%xmm0
jmp .L85
.L88:
movsd 8(%rbp),%xmm0
.L85:
movsd %xmm0,8(%rbp)
movl 0(%rbp),%eax
addl $1,%eax
movl %eax,0(%rbp)
.L80:
movl 0(%rbp),%eax
movl $14,%r11d
cmpl %eax,%r11d
jge .L86
movq 16(%rbp),%rdi
call free@PLT
movq 32(%rbp),%rdi
call free@PLT
movq 24(%rbp),%rdi
call free@PLT
movsd 8(%rbp),%xmm0
.L79:
movq %rbp,%rsp
movq 120(%rsp),%r13
movq 112(%rsp),%rbp
addq $128,%rsp
ret
.globl When
When:
addq $-32,%rsp
movq %r13,24(%rsp)
movq %rbp,16(%rsp)
movq %rsp,%rbp
movq %r12,%rsi
movq %rbp,%rdi
call gettimeofday
movq 0(%rbp),%rax
movq %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm1
popq %rax
movq 8(%rbp),%rax
movq %rax,%xmm0
pushq %rax
movd %xmm0,%rax
cvtsi2sd %rax,%xmm2
popq %rax
movsd .LC47(%rip),%xmm0
movq %xmm0,%xmm0
mulsd %xmm2,%xmm0
addsd %xmm1,%xmm0
movq %rbp,%rsp
movq 24(%rsp),%r13
movq 16(%rsp),%rbp
addq $32,%rsp
ret
