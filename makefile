parametros: parametros.o
	gcc parametros.o -o parametros -lm

parametros.o: input-v2.h parametros.c
	gcc parametros.c -c 

debug: input-v2.h parametros.c
	gcc parametros.c -o parametros -g
clean:
	rm *.o
help:
	@echo "Makefile do programa parametros.c (Exemplo de uso de input.h)"
	@echo "Visite o nosso site http://www.dirackslounge.online"
