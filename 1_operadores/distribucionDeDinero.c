// 3. Diego tiene N dólares. Felipe tiene la mitad de lo que posee Diego. Sebastián tiene
// la mitad de lo que poseen Felipe y Diego juntos. Hacer un programa que calcule e
// imprima la cantidad de dinero que tienen entre los tres.

#include <stdio.h>

int main()
{

    int felipe, diego, seba;

    printf("\t--Distribucion de dinero--\n");
    printf("Dolares de Diego:");
    scanf("%d", &diego);

    felipe = diego / 2;
    seba = (felipe + diego) / 2;

    printf("\nLos dolares de Diego es: %d", diego);
    printf("\nLos dolares de Felipe es: %d", felipe);
    printf("\nLos dolares de Seba es: %d", seba);
    printf("\nLa suma de los 3 es: %d", (diego + felipe + seba));
    printf("\n Dinero de Diego: %d \n Dinero de Felipe: %d \nDinero de Seba: %d ", diego, felipe, seba);
    return 0;
}