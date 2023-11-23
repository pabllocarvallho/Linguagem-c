#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 10

int main()
{
    /*Faça um programa C que leia dez números que representam as notas de dez alunos de uma disciplina.
    As notas variam de zero até dez (0 a 10). O programa deve validar a entrada de dados e obter:
    a)  a soma das notas;
    b)  a média das notas;
    c)  a maior nota;
    d)  a menor nota. */

    setlocale(LC_ALL, "Portuguese");

    int n[11][1], i, j, soma = 0;
    int maior = 0, menor = 10;
    float media = 0;

    printf("Notas dos alunos \n\n");

    for (i = 1; i < 11; i++){

        for (j = 0; j < 1; j++){
            printf("Digite a nota do aluno %d:", i);

            scanf("%d", &n[i][j]);

            if (n[i][j] < 0 || n[i][j] > 10){
                printf("Nota irregular! Digite novamente. \n");
                i--;
                continue;
            }

            media = media + n[i][j];

            soma = soma + n[i][j];

            if (maior < n[i][j]){
                maior = n[i][j];
            }

            if (menor > n[i][j]){
                menor = n[i][j];
            }
        }
    }
    printf("A média é: %f\n", media / 10);
    printf("A soma é igual a: %d\n", soma);
    printf("A maior nota é: %d\n", maior);
    printf("A menor nota é: %d\n", menor);





    return 0;
}
