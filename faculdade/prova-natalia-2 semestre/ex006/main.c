#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    int soma;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);

    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);

    soma 0= num1 + num2;

    if (soma > 20){
        soma = soma + 8;

        printf("O resultado final é: %d", soma);
    } else {
        soma = soma - 5;
        printf("O resultado final é: %d", soma);
    }

    return 0;
}
