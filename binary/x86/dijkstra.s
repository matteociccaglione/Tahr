
	.text
	.globl	qHead
	.section	.bss,"aw",@nobits
	.align	8
	.type	qHead, @object
	.size	qHead, 8
qHead:
	.zero	8
	.globl	AdjMatrix
	.align	32
	.type	AdjMatrix, @object
	.size	AdjMatrix, 40000
AdjMatrix:
	.zero	40000
	.globl	g_qCount
	.align	2
	.type	g_qCount, @object
	.size	g_qCount, 4
g_qCount:
	.zero	4
	.globl	rgnNodes
	.align	32
	.type	rgnNodes, @object
	.size	rgnNodes, 800
rgnNodes:
	.zero	800
	.globl	ch
	.align	4
	.type	ch, @object
	.size	ch, 4
ch:
	.zero	4
	.globl	iPrev
	.align	4
	.type	iPrev, @object
	.size	iPrev, 4
iPrev:
	.zero	4
	.globl	iNode
	.align	4
	.type	iNode, @object
	.size	iNode, 4
iNode:
	.zero	4
	.globl	i
	.align	4
	.type	i, @object
	.size	i, 4
i:
	.zero	4
	.globl	iCost
	.align	4
	.type	iCost, @object
	.size	iCost, 4
iCost:
	.zero	4
	.globl	iDist
	.align	4
	.type	iDist, @object
	.size	iDist, 4
iDist:
	.zero	4
.data
	.align	8
.LC0:
	.ascii	" %d\000"

.LC1:
	.ascii	"Out of memory.\012\000"
.LC2:
	.ascii	"Shortest path is 0 in cost. Just stay where you are.\000"
.LC3:
	.ascii	"Shortest path is %d in cost. \000"
.LC4:
	.ascii	"Path is: \000"
.LC5:
	.ascii	"Usage: dijkstra <filename>\012\000"
.LC6:
	.ascii	"Only supports matrix size is #define'd.\012\000"
.LC7:
	.ascii	"r\000"
.LC8:
	.ascii	"%d\000"
.text
.global main
.text
print_path:
pushq %rbp
xorq %r12,%r12
addq $-32,%rsp
movq %r13,24(%rsp)
movq %rbp,16(%rsp)
movq %rsp,%rbp
movq %rdi,0(%rbp)
movq %rsi,%rax
movl %eax,%eax
shll $0,%eax
movl %eax,8(%rbp)
movl 8(%rbp),%eax
movq %rax,%rax
shlq $3,%rax
movq 0(%rbp),%r11
addq %r11,%rax
movl 4(%rax),%r11d
movl $9999,%eax
cmpl %r11d,%eax
jz .L2
movl 8(%rbp),%eax
movq %rax,%rax
shlq $3,%rax
movq 0(%rbp),%r11
addq %r11,%rax
movl 4(%rax),%eax
movq %rax,%rsi
movq 0(%rbp),%rdi
call print_path
.L2:
movl 8(%rbp),%eax
movq %rax,%rsi
leaq .LC0(%rip),%rdi
call printf@PLT
movq stdout(%rip),%rax
movq %rax,%rdi
call fflush@PLT
nop
movq %rbp,%rsp
movq 24(%rsp),%r13
movq 16(%rsp),%rbp
addq $32,%rsp
popq %rbp
ret
enqueue:
pushq %rbp
xorq %r12,%r12
addq $-48,%rsp
movq %r13,40(%rsp)
movq %rbp,32(%rsp)
movq %rsp,%rbp
movq %rsi,%r11
movq %rdx,%rax
movl %edi,%edi
shll $0,%edi
movl %edi,16(%rbp)
movl %r11d,%r11d
shll $0,%r11d
movl %r11d,20(%rbp)
movl %eax,%eax
shll $0,%eax
movl %eax,24(%rbp)
movl $24,%edi
call malloc@PLT
movq %rax,8(%rbp)
leaq qHead(%rip),%rax
movq 0(%rax),%rax
movq %rax,0(%rbp)
movq 8(%rbp),%rax
cmpl %eax,%r12d
jnz .L4
movq stderr(%rip),%rax
movq %rax,%rcx
movl $15,%edx
movl $1,%esi
leaq .LC1(%rip),%rdi
call fwrite@PLT
movl $1,%edi
call exit
.L4:
movq 8(%rbp),%rax
movl 16(%rbp),%r11d
movl %r11d,0(%rax)
movq 8(%rbp),%rax
movl 20(%rbp),%r11d
movl %r11d,4(%rax)
movq 8(%rbp),%rax
movl 24(%rbp),%r11d
movl %r11d,8(%rax)
movq 8(%rbp),%rax
movq %r12,16(%rax)
movq 0(%rbp),%rax
cmpl %eax,%r12d
jnz .L7
movq 8(%rbp),%r11
leaq qHead(%rip),%rax
movq %r11,0(%rax)
jmp .L6
.L8:
movq 0(%rbp),%rax
movq 16(%rax),%rax
movq %rax,0(%rbp)
.L7:
movq 0(%rbp),%rax
movq 16(%rax),%rax
cmpl %eax,%r12d
jnz .L8
movq 0(%rbp),%rax
movq 8(%rbp),%r11
movq %r11,16(%rax)
.L6:
movl g_qCount(%rip),%eax
addl $1,%eax
movq %rax,%r11
movl %r11d,g_qCount(%rip)
nop
movq %rbp,%rsp
movq 40(%rsp),%r13
movq 32(%rsp),%rbp
addq $48,%rsp
popq %rbp
ret
dequeue:
pushq %rbp
xorq %r12,%r12
addq $-64,%rsp
movq %r13,56(%rsp)
movq %rbp,48(%rsp)
movq %rsp,%rbp
movq %rdi,16(%rbp)
movq %rsi,24(%rbp)
movq %rdx,32(%rbp)
movq qHead(%rip),%rax
movq %rax,0(%rbp)
movq qHead(%rip),%rax
cmpl %eax,%r12d
jz .L11
movq qHead(%rip),%rax
movl 0(%rax),%r11d
movq 16(%rbp),%rax
movl %r11d,0(%rax)
movq qHead(%rip),%rax
movl 4(%rax),%r11d
movq 24(%rbp),%rax
movl %r11d,0(%rax)
movq qHead(%rip),%rax
movl 8(%rax),%r11d
movq 32(%rbp),%rax
movl %r11d,0(%rax)
movq qHead(%rip),%rax
movq 16(%rax),%r11
movq %r11,qHead(%rip)
movq 0(%rbp),%rdi
call free@PLT
movl g_qCount(%rip),%eax
addl $-1,%eax
movq %rax,%r11
movl %r11d,g_qCount(%rip)
.L11:
nop
movq %rbp,%rsp
movq 56(%rsp),%r13
movq 48(%rsp),%rbp
addq $64,%rsp
popq %rbp
ret
qcount:
pushq %rbp
xorq %r12,%r12
addq $-16,%rsp
movq %rbp,8(%rsp)
movq %rsp,%rbp
movl g_qCount(%rip),%eax
movq %rbp,%rsp
movq 8(%rsp),%rbp
addq $16,%rsp
popq %rbp
ret
dijkstra:
pushq %rbp
xorq %r12,%r12
addq $-32,%rsp
movq %r13,24(%rsp)
movq %rbp,16(%rsp)
movq %rsp,%rbp
movq %rdi,%r11
movq %rsi,%rax
movl %r11d,%r11d
shll $0,%r11d
movl %r11d,0(%rbp)
movl %eax,%eax
shll $0,%eax
movl %eax,4(%rbp)
movl %r12d,ch(%rip)
jmp .L15
.L16:
movl ch(%rip),%r11d
leaq rgnNodes(%rip),%rax
movq %r11,%r11
shlq $3,%r11
addq %r11,%rax
movl $9999,%r11d
movl %r11d,0(%rax)
movl ch(%rip),%eax
leaq rgnNodes(%rip),%r11
movq %rax,%rax
shlq $3,%rax
addq %r11,%rax
movl $9999,%r11d
movl %r11d,4(%rax)
movl ch(%rip),%eax
addl $1,%eax
movq %rax,%r11
movl %r11d,ch(%rip)
.L15:
movl ch(%rip),%eax
movl $99,%r11d
cmpl %eax,%r11d
jge .L16
movl 0(%rbp),%r11d
movl 4(%rbp),%eax
cmpl %r11d,%eax
jnz .L17
leaq .LC2(%rip),%rdi
call puts@PLT
jmp .L18
.L17:
leaq rgnNodes(%rip),%rax
movl 0(%rbp),%r11d
movq %r11,%r11
shlq $3,%r11
addq %r11,%rax
movl %r12d,0(%rax)
leaq rgnNodes(%rip),%r11
movl 0(%rbp),%eax
movq %rax,%rax
shlq $3,%rax
addq %r11,%rax
movl $9999,%r11d
movl %r11d,4(%rax)
movl 0(%rbp),%eax
movl $9999,%edx
movq %r12,%rsi
movq %rax,%rdi
call enqueue
jmp .L19
.L24:
leaq iPrev(%rip),%rdx
leaq iDist(%rip),%rsi
leaq iNode(%rip),%rdi
call dequeue
movl %r12d,i(%rip)
jmp .L20
.L23:
movl iNode(%rip),%r11d
movl i(%rip),%esi
movq %r11,%rax
movq %rax,%rax
shlq $2,%rax
addq %r11,%rax
movq %rax,%r11
shlq $2,%r11
addq %r11,%rax
movq %rax,%rax
shlq $2,%rax
addq %rsi,%rax
movq %rax,%r11
shlq $2,%r11
leaq AdjMatrix(%rip),%rax
addq %r11,%rax
movl 0(%rax),%r11d
movl %r11d,iCost(%rip)
movl iCost(%rip),%r11d
movl $9999,%eax
cmpl %r11d,%eax
jz .L21
movl i(%rip),%r11d
leaq rgnNodes(%rip),%rax
movq %r11,%r11
shlq $3,%r11
addq %r11,%rax
movl 0(%rax),%r11d
movl $9999,%eax
cmpl %r11d,%eax
jz .L22
movl i(%rip),%r11d
leaq rgnNodes(%rip),%rax
movq %r11,%r11
shlq $3,%r11
addq %r11,%rax
movl 0(%rax),%eax
movl iCost(%rip),%edi
movl iDist(%rip),%r11d
addl %edi,%r11d
cmpl %eax,%r11d
jge .L21
.L22:
movl iDist(%rip),%r11d
movl iCost(%rip),%eax
movl i(%rip),%edi
addl %r11d,%eax
movq %rax,%r11
leaq rgnNodes(%rip),%rax
movq %rdi,%rdi
shlq $3,%rdi
addq %rdi,%rax
movl %r11d,0(%rax)
movl i(%rip),%eax
movl iNode(%rip),%r11d
leaq rgnNodes(%rip),%rdi
movq %rax,%rax
shlq $3,%rax
addq %rdi,%rax
movl %r11d,4(%rax)
movl i(%rip),%edi
movl iDist(%rip),%r11d
movl iCost(%rip),%eax
addl %r11d,%eax
movq %rax,%r11
movl iNode(%rip),%eax
movq %rax,%rdx
movq %r11,%rsi
call enqueue
.L21:
movl i(%rip),%eax
addl $1,%eax
movq %rax,%r11
movl %r11d,i(%rip)
.L20:
movl i(%rip),%eax
movl $99,%r11d
cmpl %eax,%r11d
jge .L23
nop
.L19:
call qcount
cmpl %r12d,%eax
jg .L24
leaq rgnNodes(%rip),%rax
movl 4(%rbp),%r11d
movq %r11,%r11
shlq $3,%r11
addq %r11,%rax
movl 0(%rax),%eax
movq %rax,%rsi
leaq .LC3(%rip),%rdi
call printf@PLT
leaq .LC4(%rip),%rdi
call printf@PLT
movl 4(%rbp),%eax
movq %rax,%rsi
leaq rgnNodes(%rip),%rdi
call print_path
movl $10,%edi
call putchar
.L18:
nop
movq %rbp,%rsp
movq 24(%rsp),%r13
movq 16(%rsp),%rbp
addq $32,%rsp
popq %rbp
ret
main:
pushq %rbp
xorq %r12,%r12
addq $-64,%rsp
movq %r13,56(%rsp)
movq %rbp,48(%rsp)
movq %rsp,%rbp
movq %rdi,%rax
movq %rsi,40(%rbp)
movl %eax,%eax
shll $0,%eax
movl %eax,32(%rbp)
movl 32(%rbp),%eax
movl $1,%r11d
cmpl %eax,%r11d
jl .L26
movq stderr(%rip),%rax
movq %rax,%rcx
movl $27,%edx
movl $1,%esi
leaq .LC5(%rip),%rdi
call fwrite@PLT
movq stderr(%rip),%rax
movq %rax,%rcx
movl $40,%edx
movl $1,%esi
leaq .LC6(%rip),%rdi
call fwrite@PLT
.L26:
movq 40(%rbp),%rax
addq $8,%rax
movq 0(%rax),%r11
leaq .LC7(%rip),%rsi
movq %r11,%rdi
call fopen@PLT
movq %rax,8(%rbp)
movl %r12d,0(%rbp)
jmp .L27
.L30:
movl %r12d,4(%rbp)
jmp .L28
.L29:
movq %rbp,%rax
addq $16,%rax
movq %rax,%rdx
leaq .LC8(%rip),%rsi
movq 8(%rbp),%rdi
call fscanf
movl 16(%rbp),%edi
movl 4(%rbp),%edx
movl 0(%rbp),%r11d
movq %r11,%rax
movq %rax,%rax
shlq $2,%rax
addq %r11,%rax
movq %rax,%r11
shlq $2,%r11
addq %r11,%rax
movq %rax,%rax
shlq $2,%rax
addq %rdx,%rax
movq %rax,%r11
shlq $2,%r11
leaq AdjMatrix(%rip),%rax
addq %r11,%rax
movl %edi,0(%rax)
movl 4(%rbp),%eax
addl $1,%eax
movl %eax,4(%rbp)
.L28:
movl 4(%rbp),%eax
movl $99,%r11d
cmpl %eax,%r11d
jge .L29
movl 0(%rbp),%eax
addl $1,%eax
movl %eax,0(%rbp)
.L27:
movl 0(%rbp),%eax
movl $99,%r11d
cmpl %eax,%r11d
jge .L30
movl %r12d,0(%rbp)
movl $50,%eax
movl %eax,4(%rbp)
jmp .L31
.L32:
movl 4(%rbp),%r11d
movl $1374355456,%eax
orl $0,%eax
pushq %rdx
xorq %rdx,%rdx
movl %r11d,%eax
mull %eax
movl %edx,%eax
popq %rdx
movl %eax,%edi
sarl $5,%edi
movl %r11d,%eax
sarl $31,%eax
negl %eax
addl %eax,%edi
negl %eax
movq %rdi,%rax
movl %eax,%eax
shll $2,%eax
addl %edi,%eax
movl %eax,%edi
shll $2,%edi
addl %edi,%eax
movl %eax,%eax
shll $2,%eax
negl %eax
addl %r11d,%eax
movl %eax,4(%rbp)
movl 4(%rbp),%r11d
movl 0(%rbp),%eax
movq %r11,%rsi
movq %rax,%rdi
call dijkstra
movl 0(%rbp),%eax
addl $1,%eax
movl %eax,0(%rbp)
movl 4(%rbp),%eax
addl $1,%eax
movl %eax,4(%rbp)
.L31:
movl 0(%rbp),%eax
movl $19,%r11d
cmpl %eax,%r11d
jge .L32
movq %r12,%rdi
call exit

