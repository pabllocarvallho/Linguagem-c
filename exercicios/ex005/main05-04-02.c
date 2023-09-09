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

// quando a condição de if se torna verdadeira, é ignorado tudo oque esta apos o continue, é incrementado o valor na variavel e é feito a leitura da condição novamente.
