#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[5][4], i,j;

    for (i=0; i < 5; i++)
        for (j=0; j < 4; j++)
            n[i][j] = 0;

    printf("%s\n", "Matrizes");
    for (i=0; i < 5; i++)
    {
        printf("\nLinha %2d\n", i);
        for (j=0; j < 4; j++)
            printf("%d", n[i][j]);

    }

}
