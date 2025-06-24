// Pedir 5 fechas de nacimientos e imprimirlas

#include <stdio.h>

struct Fecha
{
    int dia;
    int mes;
    int year;
};

int main()
{

    struct Fecha fechasDeNacimiento[5];

    // [dia: 5, mes:8 , year: 205],
    // [dia: , mes: , year:],
    // [dia: , mes: , year:],
    // [dia: , mes: , year:],
    // [dia: , mes: , year:]

    for (int i = 0; i < 5; i++)
    {
        printf("Dia: ");
        scanf("%d", &fechasDeNacimiento[i].dia);
        printf("Mes: ");
        scanf("%d", &fechasDeNacimiento[i].mes);
        printf("Year: ");
        scanf("%d", &fechasDeNacimiento[i].year);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("[Dia: %d \t Mes: %d \t Year: %d]\n", fechasDeNacimiento[i].dia, fechasDeNacimiento[i].mes, fechasDeNacimiento[i].year);
    }

    return 0;
}