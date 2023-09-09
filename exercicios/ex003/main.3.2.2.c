#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int dado = 10;
	printf ("Dado antes do incremento: %d.\n", dado);
	
	dado++;
	printf("depois do incremento: %d.\n", dado);
	
	dado--;
	printf("depois do decremento: %d.\n", dado),
	
	dado += 3;
	printf("depois do incremento de 3 unidades: %d.\n", dado);
	
	dado -= 2;
	printf("depois do decremento de 2 unidades: %d.\n", dado);
	
	dado *= 10;
	printf("depois de multiplicar por 10: %d.\n", dado);
	return 0;
}
