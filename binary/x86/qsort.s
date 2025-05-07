.data
	.align	8
.LC0:
	.ascii	"Usage: qsort_small <file>\012\000"
	.align	8
.LC1:
	.ascii	"r\000"
	.align	8
.LC2:
	.ascii	"%s\000"
	.align	8
.LC3:
	.ascii	"\012Sorting %d elements.\012\012\000"
.text
.global compare
compare:
pushq %r12
xorq %r12,%r12
addq $-48,%rsp
movq %r13,40(%rsp)
movq %rbp,32(%rsp)
movq %rsp,%rbp
movq %rdi,16(%rbp)
movq %rsi,24(%rbp)
movq 16(%rbp),%rax
movq 24(%rbp),%r11
movq %r11,%rsi
movq %rax,%rdi
call strcmp@PLT
movl %eax,0(%rbp)
movl 0(%rbp),%eax
cmpl %r12d,%eax
jl .L2
movl 0(%rbp),%eax
cmpl %eax,%r12d
jnz .L3
movq %r12,%rax
jmp .L5
.L3:
movl $-1,%eax
jmp .L5
.L2:
movl $1,%eax
.L5:
movq %rbp,%rsp
movq 40(%rsp),%r13
movq 32(%rsp),%rbp
addq $48,%rsp
popq %r12
ret
.globl main
main:
pushq %rbp
xor %r12,%r12
addq $-32752,%rsp
movq %r13,32744(%rsp)
movq %rbp,32736(%rsp)
movl $7602176,%r11d
orl $0xb040,%r11d
negq %r11
addq %r11,%rsp
negq %r11
movq %rsp,%rbp
movq %rdi,%rax
movl $7667712,%r11d
addq %rbp,%r11
movq %rsi,12312(%r11)
movl %eax,%eax
shll $0,%eax
movl $7667712,%r11d
addq %rbp,%r11
movl %eax,12304(%r11)
movl %r12d,4(%rbp)
movl $7667712,%eax
addq %rbp,%rax
movl 12304(%rax),%eax
movl $1,%r11d
cmpl %eax,%r11d
jb .L8
leaq stderr(%rip),%rax
movq 0(%rax),%rax
movq %rax,%rcx
movl $26,%edx
movl $1,%esi
leaq .LC0(%rip),%rdi
call fwrite@PLT
movl $-1,%edi
call exit
.L8:
movl $7667712,%eax
addq %rbp,%rax
movq 12312(%rax),%rax
addq $8,%rax
movq 0(%rax),%r11
leaq .LC1(%rip),%rsi
movq %r11,%rdi
call fopen@PLT
movq %rax,8(%rbp)
jmp .L9
.L11:
movl 4(%rbp),%eax
addl $1,%eax
movl %eax,4(%rbp)
.L9:
movq %rbp,%r11
addq $16,%r11
movl 4(%rbp),%eax
movq %rax,%rax
shlq $7,%rax
addq %r11,%rax
movq %rax,%rdx
leaq .LC2(%rip),%rsi
movq 8(%rbp),%rdi
call fscanf@PLT
movq %rax,%r11
movl $1,%eax
cmpl %r11d,%eax
jnz .L10
movl 4(%rbp),%eax
movl $59999,%r11d
cmpl %eax,%r11d
jge .L11
.L10:
movl 4(%rbp),%eax
movq %rax,%rsi
leaq .LC3(%rip),%rdi
call printf@PLT
movl 4(%rbp),%r11d
movq %rbp,%rdi
addq $16,%rdi
leaq compare(%rip),%rcx
movl $128,%edx
movq %r11,%rsi
call qsort@PLT
movl %r12d,0(%rbp)
jmp .L12
.L13:
movq %rbp,%r11
addq $16,%r11
movl 0(%rbp),%eax
movq %rax,%rax
shlq $7,%rax
addq %r11,%rax
movq %rax,%rdi
call puts@PLT
movl 0(%rbp),%eax
addl $1,%eax
movl %eax,0(%rbp)
.L12:
movl 0(%rbp),%r11d
movl 4(%rbp),%eax
cmpl %eax,%r11d
jb .L13
movq %r12,%rax
movl $7602176,%ebx
orl $0xb040,%ebx
movq %rbp,%rsp
addq %rbx,%rsp
movq 32744(%rsp),%r13
movq 32736(%rsp),%rbp
addq $32752,%rsp
popq %rbp
ret
