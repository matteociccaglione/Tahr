.data
stdout: .word  1
stderr: .word  2
qHead: .space	8
AdjMatrix: .space 40000
g_qCount: .space 4
rgnNodes: .space 800
ch: .space 4
iPrev: .space 4
iNode: .space 4
i: .space 4
iCost: .space 4
iDist: .space 4
BigConst: .qword 1374355456
.LC0: .ascii " %d\000"
.LC1: .ascii "Out of memory.\012\000"
.LC2: .ascii "Shortest path is 0 in cost. Just stay where you are.\000"
.LC3: .ascii "Shortest path is %d in cost. \000"
.LC4: .ascii "Path is: \000"
.LC5: .ascii "Usage: dijkstra <filename>\012\000"
.LC6: .ascii "Only supports matrix size is #define'd.\012\000"
.LC7: .ascii "r\000"
.LC8: .ascii "%d\000"
.text
main:
xor_r_r r5 , r5
nop
xor_r_r temp,temp
add_r_i temp,64
neg_r temp
add_r_r sp,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,56
xor_r_r rsize,rsize
add_r_i rsize,64
store_r_r ret,temp
xor_r_r v0,v0
add_r_r v0,r0
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,40
xor_r_r rsize,rsize
add_r_i rsize,64
store_r_r r1,temp
nop
shl_r_i v0,0
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,32
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r v0,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,32
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,temp
xor_r_r r4,r4
add_r_i r4,1
ltgt .L26
xor_r_r rsize,rsize
add_r_i rsize,1
jlt_r_r r4,v0
lea_r_m v0,stderr
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,v0
xor_r_r r3,r3
add_r_r r3,v0
xor_r_r r2,r2
add_r_i r2,27
xor_r_r r1,r1
add_r_i r1,1
lea_r_m r0,.LC5
xor_r_r rlibc,rlibc
add_r_i rlibc,64
libc
lea_r_m v0,stderr
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,v0
xor_r_r r3,r3
add_r_r r3,v0
xor_r_r r2,r2
add_r_i r2,40
xor_r_r r1,r1
add_r_i r1,1
lea_r_m r0,.LC6
xor_r_r rlibc,rlibc
add_r_i rlibc,64
libc
.L26:
xor_r_r temp,temp
add_r_i temp,40
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,temp
nop
add_r_i v0,8
xor_r_r temp,temp
add_r_i temp,0
add_r_r temp,v0
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r r4,temp
lea_r_m r1,.LC7
xor_r_r r0,r0
add_r_r r0,r4
xor_r_r rlibc,rlibc
add_r_i rlibc,51
libc
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,8
xor_r_r rsize,rsize
add_r_i rsize,64
store_r_r v0,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r5,temp
ltgt .L27
jmp
.L30:
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,4
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r5,temp
ltgt .L28
jmp
.L29:
xor_r_r v0,v0
add_r_r v0,sp
add_r_i v0,16
xor_r_r r2,r2
add_r_r r2,v0
lea_r_m r1,.LC8
xor_r_r temp,temp
add_r_i temp,8
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r r0,temp
xor_r_r rlibc,rlibc
add_r_i rlibc,56
libc
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,16
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r0,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,4
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r2,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,temp
xor_r_r v0,v0
add_r_r v0,r4
nop
shl_r_i v0,2
add_r_r v0,r4
xor_r_r r4,r4
add_r_r r4,v0
shl_r_i r4,2
add_r_r v0,r4
nop
shl_r_i v0,2
add_r_r v0,r2
xor_r_r r4,r4
add_r_r r4,v0
shl_r_i r4,2
lea_r_m v0,AdjMatrix
add_r_r v0,r4
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r0,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,4
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,temp
nop
add_r_i v0,1
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,4
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r v0,temp
.L28:
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,4
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,temp
xor_r_r r4,r4
add_r_i r4,99
xor_r_r rsize,rsize
add_r_i rsize,1
ltgt .L29
je_r_r r4,v0
jlt_r_r v0,r4
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,temp
nop
add_r_i v0,1
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r v0,temp
.L27:
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,temp
xor_r_r r4,r4
add_r_i r4,99
xor_r_r rsize,rsize
add_r_i rsize,1
ltgt .L30
je_r_r r4,v0
jlt_r_r v0,r4
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r5,temp
xor_r_r v0,v0
add_r_i v0,50
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,4
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r v0,temp
ltgt .L31
jmp
.L32:
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,4
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,temp
lea_r_m v0,BigConst
xor_r_r temp,temp
add_r_i temp,0
add_r_r temp,v0
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,temp
xor_r_r temp,temp
add_r_i temp,34079
nop
not_r temp
not_r v0
and_r_r temp,v0
not_r v0
not_r temp
xor_r_r v0,v0
add_r_r v0,temp
xor_r_r temp,temp
add_r_r temp,r4
nop
v_arit 0,v0
shr_r_i v0,32
xor_r_r r0,r0
add_r_r r0,v0
sar_r_i r0,5
xor_r_r v0,v0
add_r_r v0,r4
sar_r_i v0,31
xor_r_r temp,temp
add_r_r temp,v0
neg_r temp
add_r_r temp,r0
xor_r_r r0,r0
add_r_r r0,temp
xor_r_r v0,v0
add_r_r v0,r0
nop
shl_r_i v0,2
add_r_r v0,r0
xor_r_r r0,r0
add_r_r r0,v0
shl_r_i r0,2
add_r_r v0,r0
nop
shl_r_i v0,2
xor_r_r temp,temp
add_r_r temp,v0
neg_r temp
add_r_r temp,r4
xor_r_r v0,v0
add_r_r v0,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,4
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r v0,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,4
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,temp
xor_r_r r1,r1
add_r_r r1,r4
xor_r_r r0,r0
add_r_r r0,v0
ltgt dijkstra
v_jal
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,temp
nop
add_r_i v0,1
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r v0,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,4
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,temp
nop
add_r_i v0,1
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,4
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r v0,temp
.L31:
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,temp
xor_r_r r4,r4
add_r_i r4,19
xor_r_r rsize,rsize
add_r_i rsize,1
ltgt .L32
je_r_r r4,v0
jlt_r_r v0,r4
xor_r_r r0,r0
add_r_r r0,r5
xor_r_r rlibc,rlibc
add_r_i rlibc,17
libc
print_path:
nop
xor_r_r temp,temp
add_r_i temp,32
neg_r temp
add_r_r sp,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,24
xor_r_r rsize,rsize
add_r_i rsize,64
store_r_r ret,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,64
store_r_r r0,temp
xor_r_r v0,v0
add_r_r v0,r1
nop
shl_r_i v0,0
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,8
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r v0,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,8
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,temp
nop
shl_r_i v0,3
xor_r_r temp,temp
add_r_i temp,0
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r r4,temp
add_r_r v0,r4
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,4
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,temp
xor_r_r v0,v0
add_r_i v0,9999
ltgt .L2
je_r_r r4,v0
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,8
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,temp
nop
shl_r_i v0,3
xor_r_r temp,temp
add_r_i temp,0
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r r4,temp
add_r_r v0,r4
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,4
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,temp
xor_r_r r1,r1
add_r_r r1,v0
xor_r_r temp,temp
add_r_i temp,0
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r r0,temp
ltgt print_path
v_jal
.L2:
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,8
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,temp
xor_r_r r1,r1
add_r_r r1,v0
lea_r_m r0,.LC0
xor_r_r rlibc,rlibc
add_r_i rlibc,2
libc
lea_r_m v0,stdout
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,v0
xor_r_r r0,r0
add_r_r r0,v0
xor_r_r rlibc,rlibc
add_r_i rlibc,44
libc
nop
xor_r_r temp,temp
add_r_i temp,24
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r ret,temp
nop
add_r_i sp,32
xor_r_r tgt,tgt
add_r_r tgt,ret
jmp
enqueue:
nop
xor_r_r temp,temp
add_r_i temp,48
neg_r temp
add_r_r sp,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,40
xor_r_r rsize,rsize
add_r_i rsize,64
store_r_r ret,temp
xor_r_r r4,r4
add_r_r r4,r1
xor_r_r v0,v0
add_r_r v0,r2
nop
shl_r_i r0,0
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,16
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r0,temp
nop
shl_r_i r4,0
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,20
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r4,temp
nop
shl_r_i v0,0
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,24
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r v0,temp
xor_r_r r0,r0
add_r_i r0,24
xor_r_r rlibc,rlibc
add_r_i rlibc,104
libc
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,8
xor_r_r rsize,rsize
add_r_i rsize,64
store_r_r v0,temp
lea_r_m v0,qHead
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,v0
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,64
store_r_r v0,temp
xor_r_r temp,temp
add_r_i temp,8
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,temp
xor_r_r rsize,rsize
add_r_i rsize,1
ltgt .L4
jlt_r_r v0,r5
jlt_r_r r5,v0
lea_r_m v0,stderr
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,v0
xor_r_r r3,r3
add_r_r r3,v0
xor_r_r r2,r2
add_r_i r2,15
xor_r_r r1,r1
add_r_i r1,1
lea_r_m r0,.LC1
xor_r_r rlibc,rlibc
add_r_i rlibc,64
libc
xor_r_r r0,r0
add_r_i r0,1
xor_r_r rlibc,rlibc
add_r_i rlibc,17
libc
.L4:
xor_r_r temp,temp
add_r_i temp,8
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,16
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,temp
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r4,temp
xor_r_r temp,temp
add_r_i temp,8
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,20
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,temp
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,4
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r4,temp
xor_r_r temp,temp
add_r_i temp,8
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,24
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,temp
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,8
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r4,temp
xor_r_r temp,temp
add_r_i temp,8
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,temp
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,16
xor_r_r rsize,rsize
add_r_i rsize,64
store_r_r r5,temp
xor_r_r temp,temp
add_r_i temp,0
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,temp
xor_r_r rsize,rsize
add_r_i rsize,1
ltgt .L7
jlt_r_r v0,r5
jlt_r_r r5,v0
xor_r_r temp,temp
add_r_i temp,8
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r r4,temp
lea_r_m temp,qHead
xor_r_r rsize,rsize
add_r_i rsize,64
store_r_r r4,temp
ltgt .L6
jmp
.L8:
xor_r_r temp,temp
add_r_i temp,0
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,temp
xor_r_r temp,temp
add_r_i temp,16
add_r_r temp,v0
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,64
store_r_r v0,temp
.L7:
xor_r_r temp,temp
add_r_i temp,0
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,temp
xor_r_r temp,temp
add_r_i temp,16
add_r_r temp,v0
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,temp
xor_r_r rsize,rsize
add_r_i rsize,1
ltgt .L8
jlt_r_r v0,r5
jlt_r_r r5,v0
xor_r_r temp,temp
add_r_i temp,0
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,temp
xor_r_r temp,temp
add_r_i temp,8
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r r4,temp
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,16
xor_r_r rsize,rsize
add_r_i rsize,64
store_r_r r4,temp
.L6:
lea_r_m v0,g_qCount
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,v0
nop
add_r_i v0,1
xor_r_r r4,r4
add_r_r r4,v0
lea_r_m temp,g_qCount
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r4,temp
nop
xor_r_r temp,temp
add_r_i temp,40
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r ret,temp
nop
add_r_i sp,48
xor_r_r tgt,tgt
add_r_r tgt,ret
jmp
dequeue:
nop
xor_r_r temp,temp
add_r_i temp,64
neg_r temp
add_r_r sp,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,56
xor_r_r rsize,rsize
add_r_i rsize,64
store_r_r ret,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,16
xor_r_r rsize,rsize
add_r_i rsize,64
store_r_r r0,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,24
xor_r_r rsize,rsize
add_r_i rsize,64
store_r_r r1,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,32
xor_r_r rsize,rsize
add_r_i rsize,64
store_r_r r2,temp
lea_r_m v0,qHead
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,v0
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,64
store_r_r v0,temp
lea_r_m v0,qHead
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,v0
ltgt .L11
je_r_r v0,r5
lea_r_m v0,qHead
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,v0
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,temp
xor_r_r temp,temp
add_r_i temp,16
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,temp
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r4,temp
lea_r_m v0,qHead
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,v0
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,4
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,temp
xor_r_r temp,temp
add_r_i temp,24
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,temp
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r4,temp
lea_r_m v0,qHead
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,v0
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,8
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,temp
xor_r_r temp,temp
add_r_i temp,32
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,temp
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r4,temp
lea_r_m v0,qHead
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r v0,v0
xor_r_r temp,temp
add_r_i temp,16
add_r_r temp,v0
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r r4,temp
lea_r_m temp,qHead
xor_r_r rsize,rsize
add_r_i rsize,64
store_r_r r4,temp
xor_r_r temp,temp
add_r_i temp,0
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r r0,temp
xor_r_r rlibc,rlibc
add_r_i rlibc,105
libc
lea_r_m v0,g_qCount
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,v0
nop
xor_r_r temp,temp
add_r_i temp,1
neg_r temp
add_r_r v0,temp
xor_r_r r4,r4
add_r_r r4,v0
lea_r_m temp,g_qCount
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r4,temp
.L11:
nop
xor_r_r temp,temp
add_r_i temp,56
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r ret,temp
nop
add_r_i sp,64
xor_r_r tgt,tgt
add_r_r tgt,ret
jmp
qcount:
lea_r_m v0,g_qCount
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,v0
xor_r_r tgt,tgt
add_r_r tgt,ret
jmp
dijkstra:
nop
xor_r_r temp,temp
add_r_i temp,32
neg_r temp
add_r_r sp,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,24
xor_r_r rsize,rsize
add_r_i rsize,64
store_r_r ret,temp
xor_r_r r4,r4
add_r_r r4,r0
xor_r_r v0,v0
add_r_r v0,r1
nop
shl_r_i r4,0
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r4,temp
nop
shl_r_i v0,0
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,4
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r v0,temp
lea_r_m temp,ch
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r5,temp
ltgt .L15
jmp
.L16:
lea_r_m r4,ch
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,r4
lea_r_m v0,rgnNodes
nop
shl_r_i r4,3
add_r_r v0,r4
xor_r_r r4,r4
add_r_i r4,9999
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r4,temp
lea_r_m v0,ch
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,v0
lea_r_m r4,rgnNodes
nop
shl_r_i v0,3
add_r_r v0,r4
xor_r_r r4,r4
add_r_i r4,9999
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,4
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r4,temp
lea_r_m v0,ch
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,v0
nop
add_r_i v0,1
xor_r_r r4,r4
add_r_r r4,v0
lea_r_m temp,ch
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r4,temp
.L15:
lea_r_m v0,ch
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,v0
xor_r_r r4,r4
add_r_i r4,99
xor_r_r rsize,rsize
add_r_i rsize,1
ltgt .L16
je_r_r r4,v0
jlt_r_r v0,r4
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,4
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,temp
xor_r_r rsize,rsize
add_r_i rsize,1
ltgt .L17
jlt_r_r r4,v0
jlt_r_r v0,r4
lea_r_m r0,.LC2
xor_r_r rlibc,rlibc
add_r_i rlibc,85
libc
ltgt .L18
jmp
.L17:
lea_r_m v0,rgnNodes
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,temp
nop
shl_r_i r4,3
add_r_r v0,r4
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r5,temp
lea_r_m r4,rgnNodes
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,temp
nop
shl_r_i v0,3
add_r_r v0,r4
xor_r_r r4,r4
add_r_i r4,9999
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,4
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r4,temp
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,temp
xor_r_r r2,r2
add_r_i r2,9999
xor_r_r r1,r1
add_r_r r1,r5
xor_r_r r0,r0
add_r_r r0,v0
ltgt enqueue
v_jal
ltgt .L19
jmp
.L24:
lea_r_m r2,iPrev
lea_r_m r1,iDist
lea_r_m r0,iNode
ltgt dequeue
v_jal
lea_r_m temp,i
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r5,temp
ltgt .L20
jmp
.L23:
lea_r_m r4,iNode
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,r4
lea_r_m r1,i
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r1,r1
xor_r_r v0,v0
add_r_r v0,r4
nop
shl_r_i v0,2
add_r_r v0,r4
xor_r_r r4,r4
add_r_r r4,v0
shl_r_i r4,2
add_r_r v0,r4
nop
shl_r_i v0,2
add_r_r v0,r1
xor_r_r r4,r4
add_r_r r4,v0
shl_r_i r4,2
lea_r_m v0,AdjMatrix
add_r_r v0,r4
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,temp
lea_r_m temp,iCost
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r4,temp
lea_r_m r4,iCost
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,r4
xor_r_r v0,v0
add_r_i v0,9999
ltgt .L21
je_r_r r4,v0
lea_r_m r4,i
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,r4
lea_r_m v0,rgnNodes
nop
shl_r_i r4,3
add_r_r v0,r4
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,temp
xor_r_r v0,v0
add_r_i v0,9999
ltgt .L22
je_r_r r4,v0
lea_r_m r4,i
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,r4
lea_r_m v0,rgnNodes
nop
shl_r_i r4,3
add_r_r v0,r4
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,temp
lea_r_m r0,iCost
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r0,r0
lea_r_m r4,iDist
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,r4
add_r_r r4,r0
xor_r_r rsize,rsize
add_r_i rsize,1
ltgt .L21
je_r_r r4,v0
jlt_r_r v0,r4
.L22:
lea_r_m r4,iDist
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,r4
lea_r_m v0,iCost
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,v0
lea_r_m r0,i
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r0,r0
add_r_r v0,r4
xor_r_r r4,r4
add_r_r r4,v0
lea_r_m v0,rgnNodes
nop
shl_r_i r0,3
add_r_r v0,r0
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r4,temp
lea_r_m v0,i
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,v0
lea_r_m r4,iNode
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,r4
lea_r_m r0,rgnNodes
nop
shl_r_i v0,3
add_r_r v0,r0
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,4
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r4,temp
lea_r_m r0,i
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r0,r0
lea_r_m r4,iDist
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,r4
lea_r_m v0,iCost
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,v0
add_r_r v0,r4
xor_r_r r4,r4
add_r_r r4,v0
lea_r_m v0,iNode
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,v0
xor_r_r r2,r2
add_r_r r2,v0
xor_r_r r1,r1
add_r_r r1,r4
ltgt enqueue
v_jal
.L21:
lea_r_m v0,i
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,v0
nop
add_r_i v0,1
xor_r_r r4,r4
add_r_r r4,v0
lea_r_m temp,i
xor_r_r rsize,rsize
add_r_i rsize,32
store_r_r r4,temp
.L20:
lea_r_m v0,i
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,v0
xor_r_r r4,r4
add_r_i r4,99
xor_r_r rsize,rsize
add_r_i rsize,1
ltgt .L23
je_r_r r4,v0
jlt_r_r v0,r4
nop
.L19:
ltgt qcount
v_jal
ltgt .L24
xor_r_r rsize,rsize
add_r_i rsize,1
jlt_r_r r5,v0
lea_r_m v0,rgnNodes
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,4
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r r4,temp
nop
shl_r_i r4,3
add_r_r v0,r4
xor_r_r temp,temp
add_r_r temp,v0
add_r_i temp,0
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,temp
xor_r_r r1,r1
add_r_r r1,v0
lea_r_m r0,.LC3
xor_r_r rlibc,rlibc
add_r_i rlibc,2
libc
lea_r_m r0,.LC4
xor_r_r rlibc,rlibc
add_r_i rlibc,2
libc
xor_r_r temp,temp
add_r_r temp,sp
add_r_i temp,4
xor_r_r rsize,rsize
add_r_i rsize,32
load_r_r v0,temp
xor_r_r r1,r1
add_r_r r1,v0
lea_r_m r0,rgnNodes
ltgt print_path
v_jal
xor_r_r r0,r0
add_r_i r0,10
xor_r_r rlibc,rlibc
add_r_i rlibc,84
libc
.L18:
nop
xor_r_r temp,temp
add_r_i temp,24
add_r_r temp,sp
xor_r_r rsize,rsize
add_r_i rsize,64
load_r_r ret,temp
nop
add_r_i sp,32
xor_r_r tgt,tgt
add_r_r tgt,ret
jmp
