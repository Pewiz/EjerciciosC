// 9. Pedir el día, mes y año de una fecha e indicar si la fecha es correcta. Suponiendo
// que todos los meses son de 30 días.

#include <stdio.h>

int main()
{

    int dia, mes, year;

    printf("Ingrese el dia:");
    scanf("%d", &dia);
    printf("Ingrese el mes:");
    scanf("%d", &mes);
    printf("Ingrese el year:");
    scanf("%d", &year);

    if ((dia >= 1) && (dia <= 30))
    {
        if ((mes >= 0) && (mes <= 12))
        {
            if (year != 0)
            {
                printf("Fecha correcta");
            }
            else
            {
                printf("Fecha incorrecta, año incorrecto");
            }
        }
        else
        {
            printf("Fecha incorrecta, mes incorrecto");
        }
    }
    else
    {
        printf("Fecha incorrecta, dia incorrecto");
    }

    return 0;
}