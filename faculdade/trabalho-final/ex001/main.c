#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    /*Escreva um programa que leia o n�mero de alunos e o de alunas de uma sala. Como sa�da,
     o programa deve apresentar primeiro quem estiver em maior quantidade. Por exemplo, se na
     sala tiver mais alunos, apresente primeiro o n�mero de alunos, caso contr�rio apresente o
      n�mero de alunas e depois o de alunos. Considere o caso em que o n�mero de alunos � igual
      ao n�mero de alunas. */

      setlocale(LC_ALL, "Portuguese");


      int alunos = 0, alunas = 0;

      printf("Digite o n�mero de alunos: \n");
      scanf("%d", &alunos);

      printf("Digite o n�mero de alunas: \n");
      scanf("%d", &alunas);

      if (alunos >= alunas){
        printf("O n�mero de alunos �: %d\n", alunos);
        printf("O n�mero de alunas �: %d\n", alunas);
      }
      else if (alunas >= alunos){
        printf("O n�mero de alunas �: %d\n", alunas);
        printf("O n�mero de alunos �: %d\n", alunos);
      }
      else if (alunos == alunas) {
        printf("O n�mero de alunos e alunas �: %d\n", alunos);
      }


    return 0;
}
