// 17. Un vector se considera un “arreglo de espejo” si sus números que contiene hasta la mitad están repetidos en la otra mitad pero de manera inversa
//
// Ejemplos:
//
//         PAR                                    IMPAR
//  [5][3][4][4][3][5]              [7][8][2][1][6][5][6][1][2][8][7]

#include <stdio.h>

int main()
{
    int sizeArray, centro, bandera = 0;

    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d", &sizeArray);

    int numero[sizeArray];

    // Llenado de arreglo
    for (int i = 0; i < sizeArray; i++)
    {
        printf("Numero [%d]: ", i);
        scanf("%d", &numero[i]);
    }

    centro = sizeArray / 2;

    if (sizeArray % 2 == 0)
    {
        int a = centro - 1;
        int b = centro;
        while (a >= 0 && b < sizeArray)
        {

            if (numero[a] == numero[b])
            {
                bandera = 1; // Los valores de estas posiciones son iguales
            }
            else
            {
                bandera = 0; // False
            }

            a--;
            b++;
        }
        printf("%d", bandera);
    }
    else
    {
        int a = centro - 1;
        int b = centro + 1;
        while (a >= 0 && b < sizeArray)
        {

            if (numero[a] == numero[b])
            {
                bandera = 1; // True
            }
            else
            {
                bandera = 0; // False
            }
            a--;
            b++;
        }
    }

    if (bandera == 1)
    {
        printf("El arreglo ingresado ES espejo");
    }
    else
    {
        printf("El arreglo ingresado NO espejo");
    }

    return 0;
}