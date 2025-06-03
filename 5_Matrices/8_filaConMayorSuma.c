// Encontrar la fila con mayor suma en una matriz: Pedir al usuario una matriz n x m de enteros, y mostrar cuál fila tiene la mayor suma de elementos.

#include <stdio.h>

int main()
{

    int matrix[5][5];
    printf("Ingrese valores a la matriz:");

    // Llenar un matriz
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("\n[%d] x [%d]:", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    int sumaMayor = 0, filaMayor;
    for (int i = 0; i < 5; i++)
    {
        int suma = 0;

        for (int j = 0; j < 5; j++)
        {
            suma += matrix[i][j];
        }
        if (suma > sumaMayor)
        {
            sumaMayor = suma;
            filaMayor = i;
        }
    }

    printf("La fila mayor es: %d", filaMayor);

    return 0;
}