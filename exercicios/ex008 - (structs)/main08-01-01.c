#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


#define TAM 50

struct tipo_pessoa{
	int idade;
	float peso;
	char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	//criando e iniciando a variavel struct!
	
	tipo_pessoa pes = {0, 0.0, "Teste"};
	
	printf ("Inicio:\n");
	printf ("pes.idade: %d\n", pes.idade);
	printf ("pes.peso: %.2f\n", pes.peso);
	printf ("pes.nome: %s\n", pes.nome);
	
	//atribunido valores aos campos!
	
	pes.idade = 10;
	pes.peso = 99.99;
	strcpy (pes.nome, "Testo"); //para atribuir ou alterar valor a "strings" utilizamos a fun��o "strcpy()"!
	
	printf ("\nAlterando os camnpos via c�digo\n");
	printf ("pes.idade: %d\n", pes.idade);
	printf ("pes.peso: %.2f\n", pes.peso);
	printf ("pes.nome: %s\n", pes.nome);
	
	//Solicitando incer��es via teclado!
	
	printf ("\nInsira um n�mero inteiro:\n");
	scanf ("%d", &pes.idade);
	printf ("Insira um n�mero real:\n");
	scanf ("%f", &pes.peso);
	fflush(stdin); //� para n�o deixar o lixo de memoria ser armazenado na string!
	printf ("Insira uma palavra:\n");
	scanf ("%s", &pes.nome);
	
	printf ("\nAlterando os campos com dados do usu�rio: \n");
	printf ("pes.idade: %d\n", pes.idade);
	printf ("pes.peso: %.2f\n", pes.peso);
	printf ("pes.nome: %s\n", pes.nome);
	
	
	
	return 0;
}
