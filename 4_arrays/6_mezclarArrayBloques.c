// 6. Leer los datos correspondientes a dos tablas de 12 elementos numéricos, y
// mezclarlos en un tercera de la forma: 3 de la tabla A, 3 de la B, otros 3 de A, otros 3
// de la B, etc.

#include <stdio.h>

int main(){
    int A[12], B[12], C[24];

    printf("Ingrese los datos del arreglo A\n");
    for(int i=0; i<12;i++){
        printf("A[%d]:",i);
        scanf("%d", &A[i]);
    }
    printf("Ingrese los datos del arreglo B\n");
    for(int i=0; i<12;i++){
        printf("B[%d]:",i);
        scanf("%d", &B[i]);
    }
    int j=0;
    for(int i=0; i<12; i+=3){
        C[j++] = A[i];
        C[j++] = A[i+1];
        C[j++] = A[i+2];

        C[j++] = B[i];
        C[j++] = B[i+1];
        C[j++] = B[i+2];

    }

    for(int i=0; i<24;i++){
        printf("[%d] - ", C[i]);
    }


    return 0;
}