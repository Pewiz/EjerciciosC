// 6. Hacer un programa que calcule el cuadrado de una suma.

#include <stdio.h>

int main()
{
    int a, b, resultado;

    printf("Ingrese el primer termino: ");
    scanf("%d", &a);
    printf("Ingrese el segundo termino: ");
    scanf("%d", &b);

    resultado = (a + b) * (a + b);

    printf("El cuadrado de la suma de %d y %d es: %d", a, b, resultado);

    return 0;
}