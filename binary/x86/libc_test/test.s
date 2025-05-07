.data

.LC0:
	.string	"         _    _"
	.align 8
.LC1:
	.string	"         |    |  _ _   _ _____ TM"
	.align 8
.LC2:
	.string	"         |--  |  | |\\  | | | |"
.LC3:
	.string	"         |  --|  | | \\ |   |"
.LC4:
	.string	"         |    |  | |  \\|   |"
.LC5:
	.string	"         ^    ^  ^ ^   ^   ^\n"
	.align 8
.LC6:
	.string	"*** The  HINT  PERFORMANCE ANALYZER ***"
	.align 8
.LC7:
	.string	"   Version 1.0.1  June 1994-July 2022"
	.align 8
.LC8:
	.string	"   John L. Gustafson & Quinn O. Snell"
	.align 8
.LC9:
	.string	"     Scalable Computing Laboratory"
	.align 8
.LC10:
	.string	"   236 Wilhelm, Iowa State University"
	.align 8
.LC11:
	.string	"        Ames, Iowa    50011-3020"
.LC12:
	.string	"            (515) 294 - 9294\n"
.LC13:
	.string	"Copyright (C) 1994"
	.align 8
.LC14:
	.string	" Iowa State University Research Foundation, Inc."
	.align 8
.LC15:
	.string	"Modified for strict ANSI C compatibility 07/2022"
	.align 8
.LC16:
	.string	"Please send results and questions to: hint@scl.ameslab.gov"
	.align 8
.LC17:
	.string	"When sending results please follow the form in README"
	.align 8
.LC18:
	.string	"________________________________________________________"
	.align 8
.LC19:
	.string	"NOTE: This program does not take arguments."
.LC20:
	.string	"RECT is %d bytes\n"
.LC21:
	.string	"int"
.LC22:
	.string	"data/%s"
.LC23:
	.string	"w"
.LC24:
	.string	"Could not open data file"
	.align 8
.LC25:
	.string	"Apparent number of bits of accuracy: %d\n"
	.align 8
.LC26:
	.string	"Maximum associative whole number:    %.0f\n"
	.align 8
.LC27:
	.string	"Maximum number of bits of index:     %d\n"
	.align 8
.LC28:
	.string	"Maximum representable index:         %.0f\n\n"
	.align 8
.LC29:
	.string	"Index-limited data accuracy:         %d bits\n"
	.align 8
.LC30:
	.string	"Maximum usable whole number:         %.0f\n"
	.align 8
.LC31:
	.string	"Grid: %.0f wide by %.0f high.\n"
	.align 8
.LC33:
	.string	"Data type for %s is too small\n"
	.align 8
.LC34:
	.string	"Memory is not sufficient for > %3.1f second runs.\n"
	.align 8
.LC35:
	.string	"Precision is not sufficient for > %3.1f second runs.\n"
	.align 8
.LC39:
	.string	"\nThis run was memory limited at %d subintervals -> %d bytes\n"
	.align 8
.LC40:
	.string	"\nDone with first pass. Now computing net QUIPS"
.LC42:
	.string	"%12.10f %f %f %f %10d %f\n"
	.align 8
.LC43:
	.string	" Forcing a time for %d subintervals\n"
.LC44:
	.string	"\nFinished with %f net QUIPs\n"
str: .string "____ ______ _____ \n"
     .align 8

str2: .string "Hello!\n"
      .align 8

.text

.global main

main:
    pushq %rbp
    subq $8,%rsp
    leaq str(%rip),%rdi
    call puts@PLT
    leaq str2(%rip),%rdi
    call puts@PLT
leaq .LC0(%rip),%rdi
call puts@PLT
leaq .LC1(%rip),%rdi
call puts@PLT
leaq .LC2(%rip),%rdi
call puts@PLT
leaq .LC3(%rip),%rdi
call puts@PLT
leaq .LC4(%rip),%rdi
call puts@PLT
leaq .LC5(%rip),%rdi
call puts@PLT
leaq .LC6(%rip),%rdi
call puts@PLT
leaq .LC7(%rip),%rdi
call puts@PLT
leaq .LC8(%rip),%rdi
call puts@PLT
leaq .LC9(%rip),%rdi
call puts@PLT
leaq .LC10(%rip),%rdi
call puts@PLT
leaq .LC11(%rip),%rdi
call puts@PLT
leaq .LC12(%rip),%rdi
call puts@PLT
leaq .LC13(%rip),%rdi
call printf@PLT
leaq .LC14(%rip),%rdi
call puts@PLT
leaq .LC15(%rip),%rdi
call puts@PLT
leaq .LC16(%rip),%rdi
call puts@PLT
leaq .LC17(%rip),%rdi
call puts@PLT
leaq .LC18(%rip),%rdi
call puts@PLT
    addq $8,%rsp
    popq %rbp
    ret
