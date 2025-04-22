// . Hacer un programa que calcule e imprima el salario semanal de un empleado a
// partir de sus horas semanales trabajas y de su salario por hora.

#include <stdio.h>

int main()
{
    int salarioPorHora, horasTrabajas;

    printf("\t--Calculo de salario--\n");
    printf("Ingrese sus horas trabajas: ");
    scanf("%d", &horasTrabajas);
    printf("Ingrese salario por hora: ");
    scanf("%d", &salarioPorHora);

    printf("El salario semanal es: %d", (horasTrabajas * salarioPorHora));

    return 0;
}