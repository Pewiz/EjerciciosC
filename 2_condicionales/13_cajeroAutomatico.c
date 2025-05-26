// 13. Hacer un programa que simule un cajero automático con un saldo inicial de $1000,
// con el siguiente menú de opciones:
//     1. Ingresar dinero a la cuenta
//     2. Retirar dinero de la cuenta
//     3. Salir

#include <stdio.h>

int main()
{
    int saldoInicial = 1000, opcion, saldoFinal, cantidadAIngresar, cantidadARetirar;

    printf("\t--Cajero Automatico--\n");
    printf("1.- Ingresar dinero\n");
    printf("2.- Retirar dinero\n");
    printf("3.- Salir\n");
    printf("Opcion: ");
    scanf("%d", &opcion);

    switch (opcion){
        case 1:
            printf("Cantidad a ingresar: ");
            scanf("%d", &cantidadAIngresar);
            saldoFinal = saldoInicial + cantidadAIngresar;
            break;

        case 2:
            printf("Cantidad a retirar: ");
            scanf("%d", &cantidadARetirar);
            saldoFinal = saldoInicial - cantidadARetirar;
            break;

        case 3:
            break;

        default:
            printf("Opcion no valida");
            break;
    }

    printf("El saldo final es: %d ", saldoFinal);

    return 0;
}