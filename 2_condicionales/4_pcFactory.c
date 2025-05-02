// 4. En PcFactory se hace un 20% de descuento a los clientes cuya compra supere los
// $300. ¿Cuál será la cantidad que pagará una persona por su compra?

#include <stdio.h>

int main()
{

    int precio;
    float descuento = 0.2, precioFinal;

    printf("Ingrese el valor de la venta \n");
    printf("$:");
    scanf("%d", &precio);

    if (precio > 300)
    {
        descuento *= precio;
        precioFinal = precio - descuento;
        printf("El precio final es: %f", precioFinal);
    }
    else
    {
        printf("En tu compra no hay descuento, el valor es: %d", precio);
    }

    return 0;
}