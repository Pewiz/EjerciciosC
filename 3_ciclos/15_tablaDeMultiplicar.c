// 15. Realiza las tablas de multiplicar del 1 al 10

#include <stdio.h>

int main()
{

    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            printf(" %d * %d = %d\n", i, j, (i * j));
        }
        printf("\n");
    }

    return 0;
}