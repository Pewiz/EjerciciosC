// 5. La calificación final de un estudiante de informática se calcula con base a las
// calificaciones de cuatro aspectos de su rendimiento académico: participación,
// primer examen parcial, segundo examen parcial y examen final. Sabiendo que las
// calificaciones anteriores entran a la calificación final con ponderaciones del 10%,
// 25%, 25% y 40%. Hacer un programa que calcule e imprima la calificación final

#include <stdio.h>

int main()
{

    int notaParticipacion, notaParcial, notaParcial2, notaExamenFinal, calificacionFinal;

    printf("--Calculo de nota--\n");
    printf("Nota participacion: ");
    scanf("%d", &notaParticipacion);
    printf("Nota parcial 1: ");
    scanf("%d", &notaParcial);
    printf("Nota parcial 2: ");
    scanf("%d", &notaParcial2);
    printf("Nota final: ");
    scanf("%d", &notaExamenFinal);

    calificacionFinal = (notaParticipacion * 0.1) + (notaParcial * 0.25) + (notaParcial2 * 0.25) + (notaExamenFinal * 0.40);

    printf("Su calificacion final es: %d ", calificacionFinal);

    return 0;
}