#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define N 20

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "Portuguese"); //permite o uso de acentuação.
	
	char origem[N] = {"Olá Mundo!"};
	char destino[N];
	
	printf ("Antes do strcpy:\n");
	puts (origem);
	puts (destino);
	
	strcpy (destino, origem);
	
	printf ("Depois do strcpy:\n");
	puts (origem);
	puts (destino);
	
	
	return 0;
}
