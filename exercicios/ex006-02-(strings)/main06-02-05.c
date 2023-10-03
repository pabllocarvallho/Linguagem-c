#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define N 50

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "Portuguese");
	
	char s[N];
	int i;
	
	printf ("Digite um texto:\n");
	gets(s);
	i = strlen(s);
	printf ("\nTamanho do texto: %d\n", i);
	puts ("");
	
	printf ("Impressão de posição a posição (utilizando for/printf)\n");
	for (i=0; i<strlen(s); i++){
		printf ("%c", s[i]); 
	/*Lembrado que sempre se incia um vetor pelo numero "0", 
	ou seja um vertor tendo seu tamanho 5 = 0,1,2,3,4 = P,a,b,l,o */
	}
	
	printf ("\nImpressão de posição a posição (utilizando puts)\n");
	puts (s);
	
	return 0;
}
