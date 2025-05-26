// 12. Hacer un programa que pase de Kg a otra unidad de medida de masa, mostrar en
// pantalla un menú con las opciones posibles.

#include <stdio.h>

int main()
{
    int opcion;
    float medida;

    printf("\t--Conversion de unidades de medida--\n");
    printf("KG: ");
    scanf("%f", &medida);

    printf("\n1.- Onza\n");
    printf("2.- Libra\n");
    printf("3.- Tonelada\n");
    printf("4.- Gramo\n");
    printf("Opcion: ");
    scanf("%d", &opcion);

    switch(opcion){
        case 1: 
        printf("Onza: %f", (medida * 35.274));
        break;

        case 2: 
        printf("Libra: %f", (medida * 2.20462));
        break;

        case 3: 
        printf("Tonelada: %f", (medida / 1000));
        break;

        case 4: 
        printf("Gramo: %f", (medida *1000));
        break;

        default: printf("Opcion no valida"); break;

    }

    return 0;
}