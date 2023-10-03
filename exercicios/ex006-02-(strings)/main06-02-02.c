#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char s[10];
	
	printf ("Digite algo (Leitura pelo gets):\n");
	gets (s);
	fflush(stdin);
	
	puts ("Resultado:");
	puts (s);
	puts ("");
	
	printf ("Digite algo (Leitura pelo fgets):\n");
	fgets (s, 10, stdin);
	fflush(stdin);
	
	puts ("Resultado:");
	puts (s);
	
	return 0;
}
