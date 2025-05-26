// 6. Hace un programa que tome dos números y diga si ambos son pares o impares.

#include <stdio.h>

int main()
{

    int numero1, numero2;

    printf("Ingrese 2 numeros: \n");
    printf("Numero 1: ");
    scanf("%d", &numero1);
    printf("Numero 2: ");
    scanf("%d", &numero2);

    if (numero1 % 2 == 0 && numero2 % 2 == 0)
    {
        printf("Ambos numeros son pares");
    }
    else if (numero1 % 2 == 1 && numero2 % 2 == 1)
    {
        printf("Ambos numeros son impares");
    }
    else
    {
        printf("Al menos un numero es impar");
    }

    return 0;
}