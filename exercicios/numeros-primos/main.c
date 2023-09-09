#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "Portuguese"); 
	
	int x, valor=1, divisores=0;
	
	printf ("Digite um valor:");
	scanf ("%d", &x);
	
	if (x > 0){
		while (valor <= x) {
			if (x % valor == 0) {
				divisores++;
			}
			 valor++;
		}
		if (divisores == 2){
			printf ("É primo!\n");
		} else {
			printf ("Não é primo\n");
		}
	}else {
		printf ("Valor negativo ou igual a zero!\n");
	}
	
	return 0;
}
