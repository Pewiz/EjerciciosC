// 2. Pedir dos números y decir cual es mayor o si son iguales.

#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Ingrese 2 numeros \n");
    printf("Numero 1: ");
    scanf("%d", &n1);
    printf("Numero 2: ");
    scanf("%d", &n2);

    if (n1 == n2)
    {
        printf("Los numeros son iguales");
    }
    else if (n1 > n2)
    {
        printf("El numero %d es mayor que %d", n1, n2);
    }
    else
    {
        printf("El numero %d es mayor que %d", n2, n1);
    }

    return 0;
}