#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char s[10];
	
	printf ("Digite um texto (sintaxe convencional):\n");
	scanf ("%s", s);
	fflush (stdin); 
	
	/*Entrada de dados padrão (teclado), sempre declarar essa função após uma entrada de dados, expecificamente do tipo float e char,
	faz com que a proxima entrada de dados nao de problema, por causa do lixo de memoria que fica no buffer do teclado, assim nao 
	deixando que esse lixo seja amarzenado no espaço de memoria de outra entrada. */
	
	printf ("Resultado: %s\n\n", s);  
	
	printf ("Digite um texto (sintaxe aprimorada):\n");
	scanf ("%9[^\n]s", s);
	fflush (stdin);
	
	printf ("Resultado: %s\n\n", s);
	
	return 0;
}
