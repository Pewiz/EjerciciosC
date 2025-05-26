// 10. Construir un programa que simule el funcionamiento de una calculadora que puede
// realizar las cuatro operaciones aritméticas básicas (suma, resta, multiplicación y
// división) con valores numéricos enteros. El usuario debe especificar la operación
// con el primer carácter del primer parámetro de la línea de comandos: S o s para la
// suma, R o r para la resta, M o m para la multiplicación y D o d para la división.

#include <stdio.h>

int main()
{
    int num1, num2;
    char opcion;

    printf("--Calculadora basica--\n");
    printf("\nS: Suma");
    printf("\nR: Resta");
    printf("\nM: Multiplicacion");
    printf("\nD: Division");
    printf("\nOpcion: ");
    scanf("%c", &opcion);

    switch (opcion)
    {
    case 's':
    case 'S':
        printf("\nNumero 1: ");
        scanf("%d", &num1);
        printf("Numero 2: ");
        scanf("%d", &num2);
        printf("El resultado de la suma de %d + %d es: %d", num1, num2, (num1 + num2));
        break;

    case 'r':
    case 'R':
        printf("\nNumero 1: ");
        scanf("%d", &num1);
        printf("Numero 2: ");
        scanf("%d", &num2);
        printf("El resultado de la resta de %d - %d es: %d", num1, num2, (num1 - num2));
        break;

    case 'm':
    case 'M':
        printf("\nNumero 1: ");
        scanf("%d", &num1);
        printf("Numero 2: ");
        scanf("%d", &num2);
        printf("El resultado de la multiplicacion de %d * %d es: %d", num1, num2, (num1 * num2));
        break;

    case 'd':
    case 'D':
        printf("\nNumero 1: ");
        scanf("%d", &num1);
        printf("Numero 2: ");
        scanf("%d", &num2);
        printf("El resultado de la division de %d / %d es: %d", num1, num2, (num1 / num2));
        break;

    default: printf("Opcion no valida"); break;

    return 0;
}