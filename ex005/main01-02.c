#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int d;
	
	//estrutura funcia com cada numero representando 1 dia da semana.
	
	printf ("Insira  um valor de 1 a 7:\n"); 
	scanf ("%d", &d);
	
	switch (d){
		case 1:
			printf ("Domingo.\n");
			break;
		case 2:
			printf ("Segunda-Feira.\n");
			break;
		case 3:
			printf ("Terça-Feira.\n");
			break;
		case 4:
			printf ("Quarta-Feira.\n");
			break;
		case 5:
			printf ("Quinta-Feira.\n");
			break;
		case 6:
			printf ("Sexta-Feira.\n");
			break;
		case 7:
			printf ("Sabado.\n");
			break;
		default:
			printf ("Valor invalido!\n");
			break;
			
	}
	return 0;
}
