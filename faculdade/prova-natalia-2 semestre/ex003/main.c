#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num, resul;

    printf("Digite um numero: \n");
    scanf("%f", &num);

    if (num >= 0){
        printf("A raiz quadrada do numero é: %2.f", sqrt(num));
    } else {
        printf("O quadrado do numero é: %2.f", num * 2);
    }
    return 0;


}
