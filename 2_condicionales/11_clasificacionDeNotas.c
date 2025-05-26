// 11. Pedir una nota de 0 a 7 y mostrarla de la forma: Insuficiente, Suficiente, Bien,
// Notable y Sobresaliente.

#include <stdio.h>

int main()
{
    float nota;

    printf("Ingrese su nota: ");
    scanf("%f", &nota);

    if(nota < 0 || nota > 7){
        printf("Nota no valida");
    }else if(nota < 4){
        printf("Insuficiente");
    }else if(nota < 5){
        printf("Suficiente");
    }else if(nota < 6){
        printf("Bien");  
    }else if(nota < 6.5){
        printf("Notable");
    }else if(nota <= 7){
        printf("Sobresaliente");
    }

    return 0;
}