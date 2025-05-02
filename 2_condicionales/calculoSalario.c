// 5. Un trabajador necesita calcular su salario semanal, el cual se obtiene de la siguiente
// manera:
//  -Si trabaja 40 horas o menos se le paga $16 por hora.
//  -Si trabaja más de 40 horas se le paga $16 por cada una de las primeras 40
// horas y $20 por cada hora extra.

#include <stdio.h>

int main()
{
    int horasTrabajas, salarioSemanal, horasExtras;

    printf("Ingrese las horas trabajas: ");
    scanf("%d", &horasTrabajas);

    if (horasTrabajas <= 40)
    {
        salarioSemanal = horasTrabajas * 16;
        printf("Tu salario por trabajar %d es de %d", horasTrabajas, salarioSemanal);
    }
    else
    {
        horasExtras = (horasTrabajas - 40);
        salarioSemanal = (horasTrabajas - horasExtras) * 16 + horasExtras * 20;
        printf("Tu salario por trabajar %d es de %d", horasTrabajas, salarioSemanal);
    }
    return 0;
}