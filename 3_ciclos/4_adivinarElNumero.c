// 4. Realizar un juego para adivinar un número. Para ello generar un número aleatorio
// entre 0-100, y luego ir pidiendo números indicando “es mayor” o “es menor” según
// sea mayor o menor con respecto a N. El proceso termina cuando el usuario acierta y
// mostrar el número de intentos

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int numero, intentos = 0, numeroRandom;

    srand(time(NULL));
    numeroRandom = rand() % 101; // 0 - 100

    printf("-- Adivina el numero --\n");

    do
    {
        printf("Ingresa un numero: ");
        scanf("%d", &numero);
        intentos++;

        if (numero > numeroRandom)
        {
            printf("El numero es menor\n");
        }
        else if (numero < numeroRandom)
        {
            printf("El numero es mayor\n");
        }
        else
        {
            printf("Ganaste !! el numero random es: %d. \nEl numero que ingresaste es: %d \n", numeroRandom, numero);
            printf("Intentos: %d", intentos);
        }

    } while (numero != numeroRandom);

    return 0;
}
