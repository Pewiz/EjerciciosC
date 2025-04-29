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
        printf("Los numeros %d y %d son iguales", n1, n2);
    }
    else if (n1 > n2)
    {
        printf("El numero mayor es: %d", n1);
    }
    else
    {
        printf("El numero mayor es: %d", n2);
    }

    return 0;
}