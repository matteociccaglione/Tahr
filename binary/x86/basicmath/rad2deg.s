.data
.LC0:
	.long	1080459264
	.long	0
.LC1:
	.long	1074340347
	.long	1413754136
.text
.globl rad2deg
rad2deg:
xor %r12,%r12
pushq %rbp
addq $-32,%rsp
movq %rbp,24(%rsp)
movq %rsp,%rbp
movsd %xmm0,0(%rbp)
movsd 0(%rbp),%xmm5
movsd .LC0(%rip),%xmm4
movq %xmm4,%xmm5
mulsd %xmm5,%xmm5
movsd .LC1(%rip),%xmm4
movapd %xmm5,%xmm15
divsd %xmm4,%xmm15
movapd %xmm15,%xmm4
movq %rbp,%rsp
movq 24(%rsp),%rbp
addq $32,%rsp
popq %rbp
ret
deg2rad:
pushq %rbp
addq $-32,%rsp
movq %rbp,24(%rsp)
movq %rsp,%rbp
movsd %xmm0,0(%rbp)
movsd 0(%rbp),%xmm5
movsd .LC1(%rip),%xmm4
movq %xmm4,%xmm5
mulsd %xmm5,%xmm5
movsd .LC0(%rip),%xmm4
movapd %xmm5,%xmm15
divsd %xmm4,%xmm15
movapd %xmm15,%xmm4
movq %rbp,%rsp
movq 24(%rsp),%rbp
addq $32,%rsp
popq %rbp
ret
