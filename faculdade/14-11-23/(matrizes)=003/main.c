#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j;
    float media = 0, m[2][3];

    for (i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {

            scanf("%f", &m[i][j]);
            media = media + m[i][j];
        }
    }

    printf(" A média é: %f", media / 6.0);

    return 0;
}
