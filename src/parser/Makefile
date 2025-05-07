OBJ=bfg

bfg:
	bison -d bfg.y -Wconflicts-sr -Wcounterexamples
	flex bfg.l
	gcc -o ${OBJ} main.c lex.yy.c bfg.tab.c -Wno-implicit

clean:
	rm *.tab.c *.tab.h *.yy.c *.yy.h ${OBJ}
