#include <stdio.h>
#include <stdlib.h>

int main()
{

   char nome="";
   float salariof, total_vendas, salariofm, comissao;

   printf("Digite seu nome: \n");
   scanf("%s", &nome);

   printf("Digite o seu salario fixo: \n");
   scanf("%f", &salariof);

   printf("Digite o total de vendas efetuadas no mês: \n");
   scanf("%f", &total_vendas);

   comissao = total_vendas * 0.15;

   salariofm = salariof + comissao;

   printf("\nO seu nome é : %s", nome);
   printf("\nO seu salario fixo é: %f", salariof);
   printf("\nO seu salario no final do mês é igual a: %f", salariofm);

   return 0;

}
