#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    /*Um funcion�rio de uma empresa recebe aumento salarial anualmente. Sabe-se que:
    a)  esse funcion�rio foi contratado em 1995, com sal�rio inicial de R$ 1.000,00;
    b)  em 1996 recebeu aumento de 1,5% sobre seu sal�rio inicial;
    c)  a partir de 1997 (inclusive), os aumentos salariais sempre corresponderam ao dobro
        do percentual do ano anterior.
    Fa�a um programa que determine o sal�rio desse funcion�rio at� o ano 2000.*/

    setlocale(LC_ALL, "Portuguese");

    float i = 1.5, sinic = 1000, aumento_anual, sfinal, ano;

    printf("Hist�rico Salarial \n");

    printf("Sal�rio inicial: %2.f R$\n", sinic);

    for (ano = 1996; ano < 2001; ano++){

        aumento_anual = (sinic * i) / 100 ;
        sfinal = sinic + aumento_anual;

        printf("Sal�rio equivalente a %2.f: %2.f R$\n", ano, sfinal);

        sinic = sfinal;
        i = i * 2;
    }


    return 0;
}
