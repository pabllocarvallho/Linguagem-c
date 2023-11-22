#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    /*Escreva um programa que leia o número de alunos e o de alunas de uma sala. Como saída,
     o programa deve apresentar primeiro quem estiver em maior quantidade. Por exemplo, se na
     sala tiver mais alunos, apresente primeiro o número de alunos, caso contrário apresente o
      número de alunas e depois o de alunos. Considere o caso em que o número de alunos é igual
      ao número de alunas. */

      setlocale(LC_ALL, "Portuguese");


      int alunos = 0, alunas = 0;

      printf("Digite o número de alunos: \n");
      scanf("%d", &alunos);

      printf("Digite o número de alunas: \n");
      scanf("%d", &alunas);

      if (alunos >= alunas){
        printf("O número de alunos é: %d\n", alunos);
        printf("O número de alunas é: %d\n", alunas);
      }
      else if (alunas >= alunos){
        printf("O número de alunas é: %d\n", alunas);
        printf("O número de alunos é: %d\n", alunos);
      }
      else if (alunos == alunas) {
        printf("O número de alunos e alunas é: %d\n", alunos);
      }


    return 0;
}
