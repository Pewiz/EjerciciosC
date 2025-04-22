// 4. Una compañía de venta de autos usados, paga a su personal de ventas un salario de
// $1000 mensuales, más una comisión de $150 por cada auto vendido, más el 5% del
// valor de la venta por auto. Cada mes el dueño de la empresa ingresa en la
// computadora los datos pertinentes. Hacer un programa que calcule e imprima el
// salario mensual de un vendedor dado.

#include <stdio.h>

int main()
{
    int salarioBase = 1000, cantiadadAutosVendidos, valorAuto;
    float salarioTotal;
    printf("\t--Salario con comision-- \n");
    printf("Cantidad de autos vendidos: ");
    scanf("%d", &cantiadadAutosVendidos);
    printf("Valor del auto:");
    scanf("%d", &valorAuto);

    salarioTotal = salarioBase + (cantiadadAutosVendidos * 150) + ((valorAuto * 0.05) * cantiadadAutosVendidos);

    printf("\nEl salario total es: %g", salarioTotal);

    return 0;
}
