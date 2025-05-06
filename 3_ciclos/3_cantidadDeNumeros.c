// 3. Pedir números hasta que se introduzca uno negativo, y mostrar cuántos números se
// han introducido.

#include <stdio.h>

int main()
{
    int numero, contador = 0;

    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    while (numero >= 0)
    {
        contador++;
        printf("Ingresa un numero: ");
        scanf("%d", &numero);
    }

    printf("La cantidad de numeros ingresados es: %d", contador);
    return 0;
}