#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define N 50

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL,"Portuguese");
	
	char s1[N] = {"Lógica de "};
	char s2[N] = {"Porgramação"};
	
	printf ("Antes do strcat:\n");
	printf ("STR1: %s\n", s1);
	printf ("STR2: %s\n", s2);
	puts ("");
	
	strcat (s1,s2); // utilizado para colar uma string na outra.
	
	printf ("Depois do strcat:\n");
	puts (s1);
	
	return 0;
}
