// 7. Construir un programa que, dado un número total de horas, devuelve el número de
// semanas, días y horas equivalentes. Por ejemplo, dado un total de 1000 horas debe
// mostrar 5 semanas, 6 días y 16 horas.

#include <stdio.h>

int main()
{
    int numeroDeHoras, semanas, dias, horas;

    printf("Ingrese las horas: ");
    scanf("%d", &numeroDeHoras);

    semanas = numeroDeHoras / 168;
    dias = numeroDeHoras % 168 / 24;
    horas = numeroDeHoras % 24;

    printf("\nLas horas %d son equivalentes a:", numeroDeHoras);
    printf("\nSemanas: %d ", semanas);
    printf("\nDias: %d ", dias);
    printf("\nHoras: %d ", horas);

    return 0;
}