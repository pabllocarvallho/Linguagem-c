#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int j;
	
	for (j=1; j<=10; j++){
		
		if (j == 5){
			continue;
		}
		
		printf ("%d ", j);
	}
	
	return 0;
}

// quando a condi��o de if se torna verdadeira, � ignorado tudo oque esta apos o continue, � incrementado o valor na variavel e � feito a leitura da condi��o novamente.
