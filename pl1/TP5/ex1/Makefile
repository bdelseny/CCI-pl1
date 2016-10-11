
codage : codage.o code1.o code2.o
	@echo creation de codage :
	gcc -Wall -o codage codage.o code1.o code2.o
	@echo -------------------------------

codage.o : codage.c code1.h code2.h
	@echo creation de codage.o :
	gcc -Wall -c  codage.c
	@echo -------------------------------

code1.o : code1.c
	@echo creation de code1.o :
	gcc -Wall -c  code1.c
	@echo -------------------------------

code2.o : code2.c
	@echo creation de code2.o :
	gcc -Wall -c  code2.c
	@echo -------------------------------

