#include <stdio.h>

int main()
{
    int i = 1;

    while (i <= 20)
    {
        printf("%d ", i);
        i++;
    }

    for (int i = 1; i <= 20; i++)
    {
        printf("%d ", i);
    }

    return 0;
}