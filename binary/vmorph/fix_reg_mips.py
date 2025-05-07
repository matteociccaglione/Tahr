import sys
registers = [
        ("$0","$zero"),
        ("$2","$v0"),
        ("$3","$v1"),
        ("$4","$a0"),
        ("$5","$a1"),
        ("$6","$a2"),
        ("$7","$a3"),
        ("$8","$t0"),
        ("$9","$t1"),
        ("$10","$t2"),
        ("$11","$t3"),
        ("$12","$t4"),
        ("$13","$t5"),
        ("$14","$t6"),
        ("$15","$t7"),
        ("$16","$s0"),
        ("$17","$s1"),
        ("$31","$ra")
        ]


def fix():
    f = open(sys.argv[1],"r+")
    content = f.read()
    for i in range(len(registers)-1,-1,-1):
            content = content.replace(registers[i][0],registers[i][1])
    f.close()
    f = open(sys.argv[1][0:len(sys.argv[1])-2]+"_fixed.s","w")
    f.write(content)
    f.close()
    

if __name__ == "__main__":
    fix()
