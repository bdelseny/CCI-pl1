
fraction : fraction.o op_fraction.o es_fraction.o
	@echo creation fraction
	gcc -o fraction fraction.o es_fraction.o op_fraction.o -Wall -Werror
	@echo -----------------

fraction.o : fraction.c type_fraction.h es_fraction.h op_fraction.h
	@echo creation fraction.o
	gcc -c fraction.c -Wall -Werror
	@echo -----------------

es_fraction.o : es_fraction.c type_fraction.h
	@echo creation de es_fraction.o
	gcc -c es_fraction.c -Wall -Werror
	@echo -----------------

op_fraction.o : op_fraction.c type_fraction.h
	@echo creation de op_fraction.o
	gcc -c op_fraction.c -Wall -Werror
	@echo -----------------

clean :
	@echo clean
	rm -f *.o
	@echo -----------------
