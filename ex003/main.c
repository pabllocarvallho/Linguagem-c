#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int idade = 0;
	int ano = 1950;
	
	printf ("Digite uma idade:\n");
	scanf ("%d", &idade);
	
	printf ("Digite um ano de nascimento:\n");
	scanf ("%d", &ano);
	
	printf ("Idade informada: %d.\n", idade);
	printf ("Ano informado: %d.\n", ano);
	
	return 0;
}

