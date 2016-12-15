
pgmSeq : main.o sequence.o sequence.h
	@echo creation pgmSeq
	gcc -o pgmSeq main.o sequence.o -Wall -Werror
	@echo -----------------

main.o : main.c sequence.h
	@echo creation main.o
	gcc -c -g main.c -Wall -Werror
	@echo -----------------

sequence.o : sequence.c 
	@echo creation de sequence.o
	gcc -c -g sequence.c -Wall -Werror
	@echo -----------------


clean :
	@echo clean
	rm -f *.o
	@echo -----------------
