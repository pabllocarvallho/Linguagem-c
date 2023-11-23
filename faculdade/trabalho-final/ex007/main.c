#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


#define ALUNOS 10
#define NOTAS 3

int main()
{
    /*Desenvolva um programa para ler os dados de uma matriz para armazenar três notas de dez alunos.
     Em seguida apresente a menor nota da prova de cada aluno. */

    setlocale(LC_ALL, "Portuguese");

    int notas[ALUNOS][NOTAS];
    int menorNota;
    int i, j;

    // Ler as notas dos alunos
    for (i = 0; i < ALUNOS; i++) {
        printf("Digite as notas do aluno %d:\n", i+1);
        for (j = 0; j < NOTAS; j++) {
            printf("Nota %d: ", j+1);
            scanf("%d", &notas[i][j]);
        }
    }

    // Encontrar e apresentar a menor nota de cada aluno
    for (i = 0; i < ALUNOS; i++) {
        menorNota = notas[i][0];
        for (j = 1; j < NOTAS; j++) {
            if (notas[i][j] < menorNota) {
                menorNota = notas[i][j];
            }
        }
        printf("Menor nota do aluno %d: %d\n", i+1, menorNota);
    }

    return 0;

}
