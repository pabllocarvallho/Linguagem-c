#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    /*Desenvolva um programa para comparar a idade de Pedro e de Joana e informar quem � o mais velho.
     Dados de entrada: idade de Pedro e de Joana (tipo das vari�veis: inteiro, e valor em anos).
     Observa��o: essas pessoas possuem idades diferentes. */

     setlocale(LC_ALL, "Portuguese");

     int idpedro, idjoana;

     printf("Idade de Pedro: \n");
     scanf("%d", &idpedro);

     printf("Idade de Joana: \n");
     scanf("%d", &idjoana);

     if (idpedro > idjoana){
        printf("Pedro � mais velho que Joana!");
     }
     else if (idjoana > idpedro){
            printf("Joana � mais velha que Pedro!");
     }
     else {
        printf("Pedro e Joana tem a mesma idade");
     }

    return 0;
}
