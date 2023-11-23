#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    /*Faça um programa que calcule o valor da soma: S = 1/1 + 3/2 + 5/3 + 7/4 + .... + 99/50.
    */
    setlocale(LC_ALL, "Portuguese");

    int numerador = -1, denominador;
    float resposta;

    printf("Valor da soma: s = 1/1 + 3/2 + 5/3 + 7/4 + .... + 99/50\n");

    for (denominador = 1; denominador <= 50; denominador++){

        numerador = numerador + 2;
        resposta = resposta + (numerador / denominador);
    }

    printf("O resultado da soma é: %2.f\n", resposta);

    return 0;
}
