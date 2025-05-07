
.text
	.local	patlen
	.comm	patlen,4,4
	.local	skip
	.comm	skip,1024,8
	.local	skip2
	.comm	skip2,4,4
	.local	pat
	.comm	pat,8,8
.globl bmh_init
bmh_init:
xor %r12,%r12
pushq %rbp
addq $-48,%rsp
movq %r13,40(%rsp)
movq %rbp,32(%rsp)
movq %rsp,%rbp
movq %rdi,16(%rbp)
movq 16(%rbp),%r11
movq %r11,pat(%rip)
movq 16(%rbp),%rdi
call strlen@PLT
movl %eax,%eax
shll $0,%eax
movq %rax,%r11
movl %r11d,patlen(%rip)
movl %r12d,0(%rbp)
jmp .L2
.L3:
movl patlen(%rip),%r11d
leaq skip(%rip),%rax
movl 0(%rbp),%edi
movq %rdi,%rdi
shlq $2,%rdi
addq %rdi,%rax
movl %r11d,0(%rax)
movl 0(%rbp),%eax
addl $1,%eax
movl %eax,0(%rbp)
.L2:
movl 0(%rbp),%eax
movl $255,%r11d
cmpl %eax,%r11d
jge .L3
movl %r12d,0(%rbp)
jmp .L4
.L5:
movl patlen(%rip),%r11d
movl 0(%rbp),%eax
negl %eax
addl %r11d,%eax
movq pat(%rip),%rdi
movl 0(%rbp),%r11d
addq %rdi,%r11
movb 0(%r11),%r10b
movq %r11,%rdi
addl $-1,%eax
movq %rax,%r11
leaq skip(%rip),%rax
movq %rdi,%rdi
shlq $2,%rdi
addq %rdi,%rax
movl %r11d,0(%rax)
movl 0(%rbp),%eax
addl $1,%eax
movl %eax,0(%rbp)
.L4:
movl patlen(%rip),%r11d
movl 0(%rbp),%eax
cmpl %r11d,%eax
jl .L5
movq pat(%rip),%r11
movl patlen(%rip),%eax
addq $-1,%rax
addq %r11,%rax
movb 0(%rax),%r14b
movl %eax,4(%rbp)
leaq skip(%rip),%rax
movl 4(%rbp),%r11d
movq %r11,%r11
shlq $2,%r11
addq %r11,%rax
movl $32767,%r11d
movl %r11d,0(%rax)
movl patlen(%rip),%r11d
movl %r11d,skip2(%rip)
movl %r12d,0(%rbp)
jmp .L6
.L8:
movq pat(%rip),%r11
movl 0(%rbp),%eax
addq %r11,%rax
movb 0(%rax),%r14b
movq %rax,%r11
movl 4(%rbp),%eax
cmpl %eax,%r11d
jnz .L7
movl patlen(%rip),%r11d
movl 0(%rbp),%eax
negl %eax
addl %r11d,%eax
addl $-1,%eax
movq %rax,%r11
movl %r11d,skip2(%rip)
.L7:
movl 0(%rbp),%eax
addl $1,%eax
movl %eax,0(%rbp)
.L6:
movl patlen(%rip),%eax
addl $-1,%eax
movq %rax,%r11
movl 0(%rbp),%eax
cmpl %r11d,%eax
jl .L8
nop
nop
movq %rbp,%rsp
movq 40(%rsp),%r13
movq 32(%rsp),%rbp
addq $48,%rsp
popq %rbp
ret
.globl bmh_search
bmh_search:
pushq %rbp
addq $-48,%rsp
movq %rbp,40(%rsp)
movq %rsp,%rbp
movq %rdi,16(%rbp)
movq %rsi,%rax
movl %eax,%eax
shll $0,%eax
movl %eax,24(%rbp)
movl patlen(%rip),%eax
addl $-1,%eax
movq %rax,%r11
movl 24(%rbp),%eax
negl %eax
addl %r11d,%eax
movl %eax,0(%rbp)
movl 0(%rbp),%eax
cmpl %r12d,%eax
jl .L10
movq %r12,%rax
jmp .L11
.L10:
movl 24(%rbp),%eax
movq 16(%rbp),%r11
addq %r11,%rax
movq %rax,16(%rbp)
.L18:
nop
.L12:
movl 0(%rbp),%eax
movq 16(%rbp),%r11
addq %r11,%rax
movb 0(%rax),%r14b
movq %rax,%r11
leaq skip(%rip),%rax
movq %r11,%r11
shlq $2,%r11
addq %r11,%rax
movl 0(%rax),%eax
movl 0(%rbp),%r11d
addl %r11d,%eax
movl %eax,0(%rbp)
movl 0(%rbp),%eax
cmpl %r12d,%eax
jl .L12
movl $32767,%r11d
movl 24(%rbp),%eax
negl %eax
addl %r11d,%eax
movq %rax,%r11
movl 0(%rbp),%eax
cmpl %r11d,%eax
jge .L13
movq %r12,%rax
jmp .L11
.L13:
movl 0(%rbp),%eax
addl $-32767,%eax
movl %eax,0(%rbp)
movl patlen(%rip),%eax
addl $-1,%eax
movl %eax,4(%rbp)
movl 0(%rbp),%r11d
movl 4(%rbp),%eax
negl %eax
addl %r11d,%eax
movq %rax,%r11
movq 16(%rbp),%rax
addq %r11,%rax
movq %rax,8(%rbp)
nop
.L15:
movl 4(%rbp),%eax
addl $-1,%eax
movl %eax,4(%rbp)
movl 4(%rbp),%eax
cmpl %r12d,%eax
jl .L14
movl 4(%rbp),%eax
movq 8(%rbp),%r11
addq %r11,%rax
movb 0(%rax),%r14b
movq %rax,%rdi
movq pat(%rip),%r11
movl 4(%rbp),%eax
addq %r11,%rax
movb 0(%rax),%r14b
cmpl %edi,%eax
jz .L15
.L14:
movl 4(%rbp),%eax
cmpl %r12d,%eax
jge .L16
movq 8(%rbp),%rax
jmp .L11
.L16:
movl skip2(%rip),%eax
movl 0(%rbp),%r11d
addl %r11d,%eax
movl %eax,0(%rbp)
movl 0(%rbp),%eax
cmpl %r12d,%eax
jl .L18
movq %r12,%rax
.L11:
movq %rbp,%rsp
movq 40(%rsp),%rbp
addq $48,%rsp
popq %rbp
ret
