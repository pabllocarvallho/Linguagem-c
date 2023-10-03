#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define N 50

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "Portuguese");
	
	char hardText[N] = {"/exit"};
	char senha_usr[N];
	int ok;
	
	printf ("Digite um texto:\n");
	gets (senha_usr);
	
	ok = strcmp(hardText, senha_usr);
	
	if (ok == 0){
		printf ("Textos iguais");
	}
	else {
		printf ("Textos diferentes");
	}
	return 0;
}
