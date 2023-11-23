#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    /*Desenvolva um programa que calcule a média das notas de alunos
     para uma turma de no máximo 100 alunos. O programa deve solicitar
     no início o tamanho da turma. */

    setlocale(LC_ALL, "Portuguese");

    int turma = 0, i, j;
    int n[100][1];
    float media = 0;

    printf("Digite o número de alunos da turma: ");
    scanf("%d", &turma);

    if (turma > 100){
        printf("Número da turma exedido, digitar um valor entre 0 e 100.");
        return 0;
    }


    for (i = 1; i <= turma; i++){

        for  (j = 0; j < 1; j++){

            printf("Digite a nota do aluno %d: ", i);
            scanf("%d", &n[i][j]);

            media = media + n[i][j];


        }
    }
    printf("A media das notas dos alunos é: %2.f\n", media / turma);



    return 0;
}
