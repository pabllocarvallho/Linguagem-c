#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[3][2], i,j;

    for (i=0; i < 3; i++)
        for (j=0; j < 2; j++)
        {
            m[i][j]  = i+j;
            printf("i=%d j=%d elemento=%d\n", i, j, m[i][j]);

        }
    return 0;
}
