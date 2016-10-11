
exo2 : exo2.o lire.o ecrireEnt.o
	@echo creation de l executable exo2 :
	gcc -o exo2 -Wall -Werror exo2.o lire.o ecrireEnt.o
	@echo -----------------------------

ecrireEnt.o :
	@echo creation ecrireEnt.o
	gcc -c ecrireEnt.c -Wall -Werror
	@echo -----------------------------

lire.o : lire.c
	@echo creation de lire.o :
	gcc -c lire.c -Wall -Werror
	@echo -----------------------------

exo2.o : exo2.c
	@echo creation d exo2.o :
	gcc -c exo2.c -Wall -Werror
	@echo -----------------------------

clean : 
	@echo suppression des .o
	rm *.o
	@echo -----------------------------
