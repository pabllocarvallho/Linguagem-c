#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    /*Registro de Notas e Frequência de Alunos: Desenvolva um programa com
    uma matriz para registrar as notas de 5 alunos em 4 disciplinas.
    Use condicionais para identificar alunos com média abaixo de 6.0. */

    setlocale(LC_ALL, "Portuguese");

    int n[6][5];
    float media = 0;
    int nota_abaixo = 0;
    int i, j;

    printf("Digite notas de 5 alunos em 4 diciplinas \n");

    for (i = 1; i < 6; i++){

        for (j = 1; j < 5; j++){

            printf("Digite a %d nota do aluno %d: ", j, i);
            scanf("%d", &n[i][j]);
        }

    }

    for(i = 1; i < 6; i++){

        media = 0;

        for(j = 1; j < 5; j++){


            media = media + n[i][j];

            }

            media = media / 4;

            if (media < 6.0){

                printf("Nota do aluno %d abaixo: %2.f \n", i, media);
        }



    }


    return 0;
}
