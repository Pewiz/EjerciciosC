// 1.- Leer 5 números, guardarlos en un arreglo y mostrarlos en el mismo orden
// introducido.

#include <stdio.h>

int main()
{

    int numeros[5], numeroIngresado;

    // Llenar el array
    for (int i = 0; i < 5; i++)
    {
        printf("%d Ingresa un numero: ", (i + 1));
        scanf("%d", &numeroIngresado);
        numeros[i] = numeroIngresado;
        // [10] [40] [30] [5] [8] -> numeros
        // i = 0 1 2
    }

    // Imprimir el array
    for (int i = 4; i >= 0; i--)
    {
        printf("%d - ", numeros[i]);
        // [10] [40] [30] [5] [8] -> numeros
        // i = 4 3 2 1 0 -1
        // imprime = 8  5 30 40 10
    }
    return 0;
}