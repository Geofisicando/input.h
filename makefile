parametros: parametros.o
	gcc parametros.o -o parametros -lm

parametros.o: input.h parametros.c
	gcc parametros.c -c 
clean:
	rm *.o
help:
	@echo "Makefile do programa parametros.c (Exemplo de uso de input.h)"
	@echo "Visite o nosso site http://www.dirackslounge.online"
