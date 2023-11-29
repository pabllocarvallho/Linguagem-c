#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    /*Ler dois valores para as variáveis A e B, e efetuar as trocas dos
    valores de forma que a variável A passe a possuir o valor da variável
    B e a variável B passe a possuir o valor da variável A. Apresentar os
    valores trocados. */

    float a, b, troca;

    printf("Digite um valor para a: \n");
    scanf("%f", &a);

    printf("Digite um valor para b: \n");
    scanf("%f", &b);

    //troca dos valores

    troca = a;
    a = b;
    b = troca;

    printf("\nO valor digitado em a é: %.1f\n", a);
    printf("O valor digitado em b é: %.1f\n", b);


}
