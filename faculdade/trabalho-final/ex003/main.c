#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    /*Um funcionário de uma empresa recebe aumento salarial anualmente. Sabe-se que:
    a)  esse funcionário foi contratado em 1995, com salário inicial de R$ 1.000,00;
    b)  em 1996 recebeu aumento de 1,5% sobre seu salário inicial;
    c)  a partir de 1997 (inclusive), os aumentos salariais sempre corresponderam ao dobro
        do percentual do ano anterior.
    Faça um programa que determine o salário desse funcionário até o ano 2000.*/

    setlocale(LC_ALL, "Portuguese");

    float i, sinic = 1000, aumento_anual, sfinal, ano = 1996;

    printf("Histórico Salarial \n");

    printf("Salário inicial: %2.f R$\n", sinic);

    for (i = 1.5; i < 7.6; i += 1.5){

        aumento_anual = (sinic * i) /100 ;
        sfinal = sinic + aumento_anual;

        printf("Salário equivalente a %2.f: %2.f R$\n", ano, sfinal);

        sinic = sfinal;
        ano ++;
    }


    return 0;
}
