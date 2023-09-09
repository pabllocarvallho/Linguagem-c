#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necessario o uso de setlocale()

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	
	setlocale(LC_ALL, "Portuguese"); /* Identificamos como portuguese porque o windows usa assim, 
	para usar em linox e outros sistemas pesquisar. */
	
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
			printf ("� primo!\n");
		} else {
			printf ("N�o � primo\n");
		}
	}else {
		printf ("Valor negativo ou igual a zero!\n");
	}
	
	return 0;
}
