.text
.global usqrt
usqrt:
xor %r12,%r12
pushq %rbp
addq $-64,%rsp
movq %rbp,56(%rsp)
movq %rsp,%rbp
movq %rdi,32(%rbp)
movq %rsi,40(%rbp)
movq %r12,24(%rbp)
movq %r12,0(%rbp)
movq %r12,16(%rbp)
movl %r12d,8(%rbp)
jmp .L2
.L4:
movq 0(%rbp),%rax
movq %rax,%r11
shlq $2,%r11
movq 32(%rbp),%rax
movq %rax,%rax
shrq $30,%rax
andl $0,%eax
addq %r11,%rax
movq %rax,0(%rbp)
movq 32(%rbp),%rax
movq %rax,%rax
shlq $2,%rax
movq %rax,32(%rbp)
movq 24(%rbp),%rax
movq %rax,%rax
shlq $1,%rax
movq %rax,24(%rbp)
movq 24(%rbp),%rax
movq %rax,%rax
shlq $1,%rax
addq $1,%rax
movq %rax,16(%rbp)
movq 0(%rbp),%r11
movq 16(%rbp),%rax
cmpl %eax,%r11d
jb .L3
movq 0(%rbp),%r11
movq 16(%rbp),%rax
negq %rax
addq %r11,%rax
movq %rax,0(%rbp)
movq 24(%rbp),%rax
addq $1,%rax
movq %rax,24(%rbp)
.L3:
movl 8(%rbp),%eax
addl $1,%eax
movl %eax,8(%rbp)
.L2:
movl 8(%rbp),%eax
movl $31,%r11d
cmpl %eax,%r11d
jge .L4
movq 24(%rbp),%r11
movq 40(%rbp),%rax
movq %r11,0(%rax)
nop
movq %rbp,%rsp
movq 56(%rsp),%rbp
addq $64,%rsp
popq %rbp
ret
