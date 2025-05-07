.section .data
	.globl	lowervec
	.type	lowervec, @object
	.size	lowervec, 256
lowervec:
	.ascii	"\000\001\002\003\004\005\006\007\010\011\012\013\014\015"
	.ascii	"\016\017\020\021\022\023\024\025\026\027\030\031\032\033"
	.ascii	"\034\035\036\037 !\"#$%&'()*+,-./0123456789:;<=>?@abcdef"
	.ascii	"ghijklmnopqrstuvwxyz[\\]^_`abcdefghijklmnopqrstuvwxyz{|}"
	.ascii	"~\177cueaaaaceeeiiiaae\221\222ooouuyou\233\234\235\236\237"
	.ascii	"aiounn\246\247\250\251\252\253\254\255\256\257\260\261\262"
	.ascii	"\263\264\265\266\267\270\271\272\273\274\275\276\277\300"
	.ascii	"\301\302\303\304\305\306\307\310\311\312\313\314\315\316"
	.ascii	"\317\320\321\322\323\324\325\326\327\330\331\332\333\334"
	.ascii	"\335\336\337\340\341\342\343\344\345\346\347\350\351\352"
	.ascii	"\353\354\355\356\357\360\361\362\363\364\365\366\367\370"
	.ascii	"\371\372\373\374\375\376\377"
	.local	patlen
	.comm	patlen,4,4
	.local	skip
	.comm	skip,1024,8
	.local	skip2
	.comm	skip2,4,4
	.local	pat
	.comm	pat,8,8
.text
.globl bmha_init
bmha_init:
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
.L9:
movl patlen(%rip),%r11d
leaq skip(%rip),%rax
movl 0(%rbp),%edi
movq %rdi,%rdi
shlq $2,%rdi
addq %rdi,%rax
movl %r11d,0(%rax)
movl patlen(%rip),%eax
addl $-1,%eax
movl %eax,4(%rbp)
jmp .L3
.L6:
movl 0(%rbp),%eax
andl $0,%eax
movq %rax,%r11
leaq lowervec(%rip),%rax
addq %r11,%rax
movb 0(%rax),%r14b
movq pat(%rip),%rdi
movl 4(%rbp),%r11d
addq %rdi,%r11
movb 0(%r11),%r10b
movq %r11,%rdi
leaq lowervec(%rip),%r11
addq %rdi,%r11
movb 0(%r11),%r10b
cmpl %eax,%r11d
jz .L13
movl 4(%rbp),%eax
addl $-1,%eax
movl %eax,4(%rbp)
.L3:
movl 4(%rbp),%eax
cmpl %r12d,%eax
jge .L6
nop
jmp .L5
.L13:
nop
.L5:
movl 4(%rbp),%eax
cmpl %r12d,%eax
jl .L7
movl patlen(%rip),%r11d
movl 4(%rbp),%eax
negl %eax
addl %r11d,%eax
addl $-1,%eax
movq %rax,%r11
leaq skip(%rip),%rax
movl 0(%rbp),%edi
movq %rdi,%rdi
shlq $2,%rdi
addq %rdi,%rax
movl %r11d,0(%rax)
.L7:
movl patlen(%rip),%eax
addl $-1,%eax
movq %rax,%r11
movl 4(%rbp),%eax
cmpl %eax,%r11d
jnz .L8
leaq skip(%rip),%rax
movl 0(%rbp),%r11d
movq %r11,%r11
shlq $2,%r11
addq %r11,%rax
movl $32767,%r11d
movl %r11d,0(%rax)
.L8:
movl 0(%rbp),%eax
addl $1,%eax
movl %eax,0(%rbp)
.L2:
movl 0(%rbp),%eax
movl $255,%r11d
cmpl %eax,%r11d
jge .L9
movl patlen(%rip),%r11d
movl %r11d,skip2(%rip)
movl %r12d,0(%rbp)
jmp .L10
.L12:
movq pat(%rip),%r11
movl 0(%rbp),%eax
addq %r11,%rax
movb 0(%rax),%r14b
movq %rax,%r11
leaq lowervec(%rip),%rax
addq %r11,%rax
movb 0(%rax),%r14b
movq pat(%rip),%rdi
movl patlen(%rip),%r11d
addq $-1,%r11
addq %rdi,%r11
movb 0(%r11),%r10b
movq %r11,%rdi
leaq lowervec(%rip),%r11
addq %rdi,%r11
movb 0(%r11),%r10b
cmpl %eax,%r11d
jnz .L11
movl patlen(%rip),%r11d
movl 0(%rbp),%eax
negl %eax
addl %r11d,%eax
addl $-1,%eax
movq %rax,%r11
movl %r11d,skip2(%rip)
.L11:
movl 0(%rbp),%eax
addl $1,%eax
movl %eax,0(%rbp)
.L10:
movl patlen(%rip),%eax
addl $-1,%eax
movq %rax,%r11
movl 0(%rbp),%eax
cmpl %r11d,%eax
jl .L12
nop
nop
movq %rbp,%rsp
movq 40(%rsp),%r13
movq 32(%rsp),%rbp
addq $48,%rsp
popq %rbp
ret
.globl bmha_search
bmha_search:
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
jl .L15
movq %r12,%rax
jmp .L16
.L15:
movl 24(%rbp),%eax
movq 16(%rbp),%r11
addq %r11,%rax
movq %rax,16(%rbp)
.L23:
nop
.L17:
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
jl .L17
movl $32767,%r11d
movl 24(%rbp),%eax
negl %eax
addl %r11d,%eax
movq %rax,%r11
movl 0(%rbp),%eax
cmpl %r11d,%eax
jge .L18
movq %r12,%rax
jmp .L16
.L18:
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
.L20:
movl 4(%rbp),%eax
addl $-1,%eax
movl %eax,4(%rbp)
movl 4(%rbp),%eax
cmpl %r12d,%eax
jl .L19
movl 4(%rbp),%eax
movq 8(%rbp),%r11
addq %r11,%rax
movb 0(%rax),%r14b
andl $0,%eax
movq %rax,%r11
leaq lowervec(%rip),%rax
addq %r11,%rax
movb 0(%rax),%r14b
movq pat(%rip),%rdi
movl 4(%rbp),%r11d
addq %rdi,%r11
movb 0(%r11),%r10b
movq %r11,%rdi
leaq lowervec(%rip),%r11
addq %rdi,%r11
movb 0(%r11),%r10b
cmpl %eax,%r11d
jz .L20
.L19:
movl 4(%rbp),%eax
cmpl %r12d,%eax
jge .L21
movq 8(%rbp),%rax
jmp .L16
.L21:
movl skip2(%rip),%eax
movl 0(%rbp),%r11d
addl %r11d,%eax
movl %eax,0(%rbp)
movl 0(%rbp),%eax
cmpl %r12d,%eax
jl .L23
movq %r12,%rax
.L16:
movq %rbp,%rsp
movq 40(%rsp),%rbp
addq $48,%rsp
popq %rbp
ret
