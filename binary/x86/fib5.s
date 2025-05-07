.data
str: .ascii "res: %d\n"
.text
.global main

fibonacci_ricorsivo:
addq $-36,%rsp
movq %r13,32(%rsp)
movl %edi,20(%rsp)
movl 20(%rsp),%esi
cmpl $2,%esi
jb x86_art_lab_0
movl $0,%esi
jmp x86_art_lab_1
x86_art_lab_0:
movl $1,%esi
x86_art_lab_1:
cmpl %esi,%r12d
jz BB0_3
jmp BB0_2
BB0_2:
movl 20(%rsp),%esi
movl %esi,24(%rsp)
jmp BB0_4
BB0_3:
movl 20(%rsp),%esi
movl %esi,%edi
addl $-1,%edi
leaq x86_art_lab_2(%rip),%r13
jmp fibonacci_ricorsivo
x86_art_lab_2:
movl %edx,16(%rsp)
movl 20(%rsp),%esi
movl %esi,%edi
addl $-2,%edi
leaq x86_art_lab_3(%rip),%r13
jmp fibonacci_ricorsivo
x86_art_lab_3:
movq %rdx,%rsi
movl 16(%rsp),%edx
addl %edx,%esi
movl %esi,24(%rsp)
jmp BB0_4
BB0_4:
movl 24(%rsp),%edx
movq 32(%rsp),%r13
addq $36,%rsp
jmpq *%r13
main:
xor %r12,%r12
popq %r13
addq $-28,%rsp
movq %r13,24(%rsp)
movl %r12d,16(%rsp)
movl %r12d,%edi
addl $7,%edi
leaq x86_art_lab_4(%rip),%r13
jmp fibonacci_ricorsivo
x86_art_lab_4:
movsxd %edi,%rsi
leaq str(%rip),%rdi
call printf@PLT
movq 24(%rsp),%r13
addq $28,%rsp
jmpq *%r13
