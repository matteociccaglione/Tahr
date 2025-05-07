.text
.global main
main:
xor %rbp,%rbp
subq $24,%rsp
movl %r13d,20(%rsp)
movl %ebp,16(%rsp)
movl %ebp,%edi
addl $5,%edi
leaq x86_art_lab_0(%rip),%r13
jmp fibonacci_ricorsivo
x86_art_lab_0:
nop
fibonacci_ricorsivo:
subq $32,%rsp
movl %r13d,28(%rsp)
movl %edi,20(%rsp)
movl 20(%rsp),%esi
cmpl $2,%esi
jb x86_art_lab_1
movl $0,%esi
jmp x86_art_lab_2
x86_art_lab_1:
movl $1,%esi
x86_art_lab_2:
cmpl %esi,%ebp
jz BB0_3
jmp BB0_2
BB0_2:
movl 20(%rsp),%esi
movl %esi,24(%rsp)
jmp BB0_4
BB0_3:
movl 20(%rsp),%esi
movl %esi,%edi
subl $1,%edi
leaq x86_art_lab_3(%rip),%r13
jmp fibonacci_ricorsivo
x86_art_lab_3:
movl %edx,16(%rsp)
movl 20(%rsp),%esi
movl %esi,%edi
subl $2,%edi
leaq x86_art_lab_4(%rip),%r13
jmp fibonacci_ricorsivo
x86_art_lab_4:
movq %rdx,%rsi
movl 16(%rsp),%edx
addl %edx,%esi
movl %esi,24(%rsp)
jmp BB0_4
BB0_4:
movl 24(%rsp),%edx
movl 28(%rsp),%r13d
addl $32,%esp
jmpq *%r13
