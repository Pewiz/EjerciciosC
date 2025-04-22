#include <stdio.h>

int main()
{

    int nota1, nota2, nota3, sumaTotal;

    printf("\t--Ingrese 3 notas--\n");
    printf("Nota 1: ");
    scanf("%d", &nota1);
    printf("Nota 2: ");
    scanf("%d", &nota2);
    printf("Nota 3: ");
    scanf("%d", &nota3);

    sumaTotal = nota1 + nota2 + nota3;

    printf("La suma de las notas es: %d", sumaTotal);

    return 0;
}