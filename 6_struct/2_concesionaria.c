//Librerias
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


//Estructuras
typedef struct {
    char marca[30];
    char modelo[30];
    int year;
    float precio;
    bool vendido;
}Auto;

typedef struct {
    char nombre[30];
    int rut;
}Persona;

//Funciones
void mostrarMenu();
void agregarAutos(int *contador, Auto inventario[]);
void mostrarAutos( Auto inventario[], int contador);

int main(){
    //Creamos un array de Autos
    Auto inventario[10];
    // Persona comprador;
    int opcion, contador=0;

    do{
        mostrarMenu(); //El usuario ve todas la opciones
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch(opcion){
            case 1: agregarAutos(&contador, inventario); break;
            case 2: mostrarAutos(inventario, contador); break;
            case 3: /*Vender*/ break; //Cambiar el estado de vendido a true
            case 4: /*Modificar*/ break; //Pasar inventario por puntero
            case 5: /*Buscar*/ break; //Posicion del auto en el inventario
            case 6: break; //Salir
            default: printf("Opcion no valida");
        }

    }while(opcion != 6);
    return 0;
}

void mostrarAutos(Auto inventario[], int contador){
    if(contador == 0){
        printf("No hay autos en el inventario");
        return;
    }

    printf("\n --Autos disponibles-- \n");
    for(int i=0; i<contador; i++){
        if(!inventario[i].vendido){ //Si esto se cumple === True
            printf("Auto %d: \n", (i+1));
            printf("Marca: %s \n", inventario[i].marca);
            printf("Modelo: %s \n", inventario[i].modelo);
            printf("Year: %d \n", inventario[i].year);
            printf("Precio: %.2f \n", inventario[i].precio);
            printf("\n");
        }
    }

}

void agregarAutos(int *contador, Auto inventario[]){
    if(*contador >= 10){
        printf("Inventario lleno");
        return; //Hasta acá llega mi función, con esto la termino.
        //Tiene la misma funcionalidad de un break en un ciclo
    }

    printf("Ingrese marca:");
    scanf("%s", inventario[*contador].marca);
    printf("Ingrese modelo:");
    scanf("%s", inventario[*contador].modelo);
    printf("Ingrese año:");
    scanf("%d", &inventario[*contador].year);
    printf("Ingrese precio:");
    scanf("%f", &inventario[*contador].precio);
    inventario[*contador].vendido = false;

    (*contador)++; 
    printf("Auto agregado al inventario");

    //Normal: contador tiene un valor de 0
    //Puntero (*): contador tiene el valor de 0 y puedes modificarlo

}

void mostrarMenu(){

    printf("\n --Concesionaria de Autos-- \n");
    printf("1.- Agregar auto\n"); //Agregar auto al inventario
    printf("2.- Mostrar autos\n"); //Mostrar todos los autos
    printf("3.- Vender auto\n");
    printf("4.- Modificar auto \n");
    printf("5. Buscar auto\n"); //Mostrar un auto en especifico
    printf("6. Salir\n");
}