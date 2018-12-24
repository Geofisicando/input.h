/* Parametros.c
 *
 * Objetivo: Servir de exemplo de uso da biblioteca input.h
 *
 * Exemplo de uso:
 *
 * 	Execute o programa passando valores através da linha de 
 * 	comandos. Exemplo:
 * 		
 * 		bash~$ ./parametros pf=10.12 pd=3.2424 pi=10
 * 		bash~$ ./parametros pf=22.222
 * 		bash~$ ./parametros 
 *
 * Versão 1.0
 *
 * Programador: Rodolfo A. C. Neves (Dirack) 21/12/2018
 *
 * */

#include "input-v2.h"

int main(int argc, char** argv){

	float pf;
	int pi;
	double pd;
	char *var;

	/* Inicializa a tabela de parâmetros */
	init(argc, argv); 

	

	puttable("novo1=n1");
	gettable();
	//puttable("novo2=n2");
	erasetable();

	//strcpy(getstring("novo1"),var);
	//if(!getstring("novo1",var)){ 
	//	printf("string NÃO encontrada!\n");
	//}else{
	//	printf("string=%s\n",var);
	//}

	//printf("string=%s\n",var);
	gettable();
	
	init(1,argv);

		puttable("old=n1");
	gettable();

	/* Exemplo com getfloat 
	if (!getfloat("pf", &pf)){
		 pf=0.;
		printf("Não passei o parâmetro 'pf'\n");
	}else{
		printf("Passei pf=%f\n", pf);
	}

	/* Exemplo com getint
	if (!getint("pi", &pi)){
		 pi=0.;
		printf("Não passei o parâmetro 'pi'\n");
	}else{
		printf("Passei pi=%i\n", pi);
	}

	/* Exemplo com getdouble 
	if (!getdouble("pd", &pd)){
		 pd=0.;
		printf("Não passei o parâmetro 'pd'\n");
	}else{
		printf("Passei pd=%f\n", pd);
	}*/
	

}
