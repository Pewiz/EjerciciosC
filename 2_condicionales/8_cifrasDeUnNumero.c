// 8. Pedir un número entre 0 y 99.999 y decir cuántas cifras tiene.

#include <stdio.h>

int main()
{

    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (numero < 10)
    {
        printf("El numero %d tiene 1 cifra", numero);
    }
    else if (numero < 100)
    {
        printf("El numero %d tiene 2 cifra", numero);
    }
    else if (numero < 1000)
    {
        printf("El numero %d tiene 3 cifra", numero);
    }
    else if (numero < 10000)
    {
        printf("El numero %d tiene 4 cifra", numero);
    }
    else if (numero < 100000)
    {
        printf("El numero %d tiene 5 cifra", numero);
    }
    else
    {
        printf("El numero %d tiene mas de 5 cifras", numero);
    }

    return 0;
}