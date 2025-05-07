.data
str: .ascii "Hello World"
.global main
.text
main:
xor %rbp,%rbp
movl %ebp,%eax
addl $1,%eax
movl %ebp,%edi
addl $1,%edi
lea str(%rip),%rsi
movl %ebp,%edx
addl $11,%edx
syscall
