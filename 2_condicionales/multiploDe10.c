// 1. Hacer un programa que lea un número entero y muestre si el número es múltiplo
// de 10.

#include <stdio.h>

int main()
{
    int numero;

    printf("\t Verificar multiplo de 10 \n");
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (numero % 10 == 0)
    {
        printf("El numero %d es multiplo de 10", numero);
    }
    else
    {
        printf("El numero %d NO es multiplo de 10", numero);
    }

    return 0;
}