// 1. Leer un número e indicar si es positivo o negativo. El proceso se repetirá hasta que
// se introduzca un 0.

#include <stdio.h>

int main()
{
    int numero;

    do
    {
        printf("Ingresa un numero:");
        scanf("%d", &numero);

        if (numero != 0)
        {
            if (numero > 0)
            {
                printf("El numero es positivo\n");
            }
            else
            {
                printf("El numero es negativo\n");
            }
        }
    } while (numero != 0);

    return 0;
}