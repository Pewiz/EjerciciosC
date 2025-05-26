// 7. Pedir tres números y mostrarlos ordenados de mayor a menor.

#include <stdio.h>

int main()
{

    int numero1, numero2, numero3;

    printf("Numero 1: ");
    scanf("%d", &numero1);
    printf("Numero 2: ");
    scanf("%d", &numero2);
    printf("Numero 3: ");
    scanf("%d", &numero3);

    if (numero1 >= numero2 && numero1 >= numero3)
    {
        printf("%d", numero1);
        if (numero2 >= numero3)
        {
            printf("%d", numero2);
            printf("%d", numero3);
        }
        else
        {
            printf("%d", numero3);
            printf("%d", numero2);
        }
    }
    else if (numero2 >= numero1 && numero2 >= numero3)
    {
        printf("%d", numero2);
        if (numero1 >= numero3)
        {
            printf("%d", numero1);
            printf("%d", numero3);
        }
        else
        {
            printf("%d", numero3);
            printf("%d", numero1);
        }
    }
    else
    {
        printf("%d", numero3);
        if (numero2 >= numero1)
        {
            printf("%d", numero2);
            printf("%d", numero1);
        }
        else
        {
            printf("%d", numero1);
            printf("%d", numero2);
        }
    }

    return 0;
}