#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <stdbool.h>

// Variables Globales
int f, c, contAH = 0, contNH = 0, contM = 0;

// Llenar tablas
void llenarTablas(char tablaH[][10], char tablaM[][10], char tablaAtaque[][10], int filas);

// Tableros
void tableroAtaque(char tablaAtaque[][10], int filas);
void tableroH(char tablaH[][10], int filas);

// Asignar
void asignarBarcoH(char tablaH[][10], int filas);
void asignarBarcoM(char tablaM[][10], int filas);

// Atacar
void atacarBarcoH(char tablaAtaque[][10], char tablaM[][10], char tablaH[][10], int filas);
void atacarBarcoM(char tablaH[][10], int filas);

// Verificar
bool verificarH(char tablaH[][10], int filas);
bool verificarM(char tablaM[][10], int filas);
bool verificarFyC(char tablaH[][10], int filas);
bool verificarAtaqueH(char tablaAtaque[][10], char tablaM[][10], int filas);
bool verificarAtaqueM(char tablaH[][10], int filas);

// Contador puntos
void contadorPuntosH(char tablaAtaque[][10], int filas);
void contadorPuntosM(char tablaH[][10], int filas);

// mostrar Puntos
void mostrarPuntosH();
void mostrarPuntosM();

// Menu
void menuPrincipal();

// Grafica
void titulo();
void barcoImagen();
void tituloGanador();
void copa();
void derrota();

////Registro En Archivo De Texto
void escritura();
void lectura();

// Main
int main()
{
    // Variables
    char tablaH[10][10], tablaM[10][10], tablaAtaque[10][10]; // Inicializan las 3 tablas 10x10
    int opcion, salir;

    do
    {
        bool verif = true;
        system("cls");
        menuPrincipal();
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:

            contAH = 0;
            contNH = 0;
            contM = 0; // Reseteamos todos lo contadores en 0
            system("cls");
            // No se repite
            llenarTablas(tablaH, tablaM, tablaAtaque, 10);
            asignarBarcoH(tablaH, 10);
            asignarBarcoM(tablaM, 10);
            system("cls");
            tableroH(tablaH, 10);
            printf("\nPrecione \"ENTER\" para continuar\n");
            getch();
            // Se repite hasta que uno gane
            do
            {
                system("cls");
                tableroAtaque(tablaAtaque, 10);
                atacarBarcoH(tablaAtaque, tablaM, tablaH, 10);
                contadorPuntosH(tablaAtaque, 10);
                printf("\nPrecione \"ENTER\" para atacar \n");
                getch();
                system("cls");
                tableroAtaque(tablaAtaque, 10);
                mostrarPuntosH();
                printf("\nPrecione \"ENTER\" para continuar\n");
                getch();
                system("cls");

                tableroH(tablaH, 10);
                printf("\nPrecione \"ENTER\" para ver donde ataco el enemigo\n");
                getch();
                system("cls");
                atacarBarcoM(tablaH, 10);
                contadorPuntosM(tablaH, 10);
                tableroH(tablaH, 10);
                mostrarPuntosM();
                printf("\n------------------------------------");
                do
                {
                    printf("\n1- Salir Al Menu Principal");
                    printf("\n2- Continuar\n");
                    printf("%c ", 207);
                    scanf(" %d", &salir);
                    if (salir != 2 && salir != 1)
                    {
                        printf("Opcion invalida");
                    }
                } while (salir != 2 && salir != 1);
                system("cls");
                if (contAH == 7 || contM == 7)
                {
                    verif = false;
                    if (contAH == 7)
                    {
                        printf("\033[0;7m FELICIDADES, TE HAS ALZADO CON LA VICTORIA!!\033[0m");
                        copa();

                        escritura();
                    }
                    else
                    {

                        printf("\033[1;7m LO LAMENTAMOS CORONEL, NUESTROS BARCOS HAN SIDO DESTRUIDOS!! \033[0m");
                        derrota();
                    }
                }

            } while (verif == true && salir == 2);

            break;

        case 2:
            system("cls");
            tituloGanador();
            printf("\n");
            lectura();
            printf("\nPrecione \"ENTER\" para volver al menu principal\n");
            getch();
            break;

        case 3:
            break; // Opcion de salir, por eso solo va el break
        default:
        {
            printf("Opcion no valida");
            break;
        }
        }

    } while (opcion != 3);

    return 0;
}

// Llenar tablas
void llenarTablas(char tablaH[][10], char tablaM[][10], char tablaAtaque[][10], int filas)
{

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            tablaH[i][j] = '-';
            tablaM[i][j] = '-';
            tablaAtaque[i][j] = '-';
        }
    }
}

// Tableros
void tableroH(char tablaH[][10], int filas)
{
    printf("\n\033[0;42m           Tabla Jugador          \033[0m \n");
    for (int i = 0; i < 11; i++)
    {
        if (i == 0 || i == 10)
        {
            printf("[%d]", i);
        }
        else
        {
            printf("[%d] ", i);
        }
        for (int j = 1; j < 11; j++)
        {
            if (i >= 1)
            {
                if (tablaH[i - 1][j - 1] != 'x' && tablaH[i - 1][j - 1] != 'B' && tablaH[i - 1][j - 1] != 'E')
                {
                    printf("\033[1;34m");
                    printf(" %c ", tablaH[i - 1][j - 1]);
                    printf("\033[0m");
                }
            }
            if (tablaH[i - 1][j - 1] == 'x')
            {
                printf("\033[1;31m");
                printf(" %c ", tablaH[i - 1][j - 1]);
                printf("\033[0m");
            }
            else if (tablaH[i - 1][j - 1] == 'B')
            {
                printf("\033[1;32m");
                printf(" %c ", tablaH[i - 1][j - 1]);
                printf("\033[0m");
            }
            else if (tablaH[i - 1][j - 1] == 'E')
            {
                printf("\033[1;41m");
                printf(" %c ", tablaH[i - 1][j - 1]);
                printf("\033[0m");
            }
            if (i == 0)
            {
                printf("[%d]", j);
            }
        }
        printf("\n");
    }
}
void tableroAtaque(char tablaAtaque[][10], int filas)
{
    printf("\n\033[0;41m           Tabla Enemigo          \033[0m \n");
    for (int i = 0; i < 11; i++)
    {
        if (i == 0 || i == 10)
        {
            printf("[%d]", i);
        }
        else
        {
            printf("[%d] ", i);
        }

        for (int j = 1; j < 11; j++)
        {

            if (i >= 1)
            {
                if (tablaAtaque[i - 1][j - 1] != 'x' && tablaAtaque[i - 1][j - 1] != 'B')
                {
                    printf("\033[1;34m");
                    printf(" %c ", tablaAtaque[i - 1][j - 1]);
                    printf("\033[0m");
                }
            }
            if (tablaAtaque[i - 1][j - 1] == 'x')
            {
                printf("\033[1;31m");
                printf(" %c ", tablaAtaque[i - 1][j - 1]);
                printf("\033[0m");
            }
            else if (tablaAtaque[i - 1][j - 1] == 'B')
            {
                printf("\033[1;42m");
                printf(" %c ", tablaAtaque[i - 1][j - 1]);
                printf("\033[0m");
            }
            if (i == 0)
            {
                printf("[%d]", j);
            }
        }
        printf("\n");
    }
}

// Asignar
void asignarBarcoH(char tablaH[][10], int filas)
{
    bool check1, check2;
    // El jugador ingresa la posicion de los barcos

    for (int i = 0; i < 7; i++)
    {
        printf("Ingrese coordanas para posicionar los barcos para la batalla\n");
        do
        {
            printf("\nBarco %d", (i + 1));
            printf("\nFila: ");
            scanf("%d", &f);
            printf("Columna: ");
            scanf("%d", &c);
            f--;
            c--;
            check1 = verificarH(tablaH, filas);
            check2 = verificarFyC(tablaH, filas);
            if (check1 == false)
            {
                printf("Error, en las cordenadas ya hay un barco, eliga otra.");
            }
            if (check2 == false)
            {
                printf("Error, coordenada excede la cantidad permitida de 10x10.");
            }
        } while (check1 == false || check2 == false);

        tablaH[f][c] = 'B';
        system("cls");
    }
}
void asignarBarcoM(char tablaM[][10], int filas)
{
    srand(time(NULL));
    for (int i = 0; i < 7; i++)
    {
        do
        {
            f = rand() % 10;
            c = rand() % 10;
        } while (verificarM(tablaM, filas) == false);

        tablaM[f][c] = 'B';
    }
}

// Atacar
void atacarBarcoH(char tablaAtaque[][10], char tablaM[][10], char tablaH[][10], int filas)
{
    // El jugador ingresa la posicion para atacar
    printf("Ingrese coordanas para atacar a los barcos enemigos\n");
    bool check1, check2;
    do
    {
        printf("\nAtaque ");
        printf("\nFila: ");
        scanf("%d", &f);
        printf("Columna: ");
        scanf("%d", &c);
        f--;
        c--;
        check1 = verificarAtaqueH(tablaAtaque, tablaM, filas);
        check2 = verificarFyC(tablaH, filas);
        if (check1 == false)
        {
            printf("Error, coordenas ya ocupadas\n");
        }
        if (check2 == false)
        {
            printf("Error, coordenada excede la cantidad permitida de 10x10.");
        }
    } while (check1 == false || check2 == false);
}
void atacarBarcoM(char tablaH[][10], int filas)
{
    // La maquina ataca  aleatoriamente
    srand(time(NULL));
    do
    {
        f = rand() % 10;
        c = rand() % 10;
    } while (verificarAtaqueM(tablaH, filas) == false);
}

// Verificar
bool verificarH(char tablaH[][10], int filas)
{
    bool check = true;
    // Verifica que en las cordenadas ingresadas no estÃ© ocupado con algÃºn valor.
    if (tablaH[f][c] == 'B')
    {
        check = false;
    }
    return check;
}
bool verificarM(char tablaM[][10], int filas)
{
    bool check;
    // Verifica que en las cordenadas ingresadas no estÃ© ocupado con algÃºn valor.
    if (tablaM[f][c] == '-')
    {
        check = true;
    }
    else
    {
        check = false;
    }
    return check;
}
bool verificarFyC(char tablaH[][10], int filas)
{
    bool check = true;
    if (f > 9 || f < 0 || c > 9 || c < 0)
    {
        check = false;
    }
    return check;
}

bool verificarAtaqueH(char tablaAtaque[][10], char tablaM[][10], int filas)
{
    bool check = true;
    if (f > 9 || f < 0 || c > 9 || c < 0)
    {
    }
    else if (tablaM[f][c] == '-')
    {
        tablaAtaque[f][c] = 'x';
        tablaM[f][c] = 'x';
    }
    else if (tablaAtaque[f][c] == 'B' || tablaAtaque[f][c] == 'x')
    {
        check = false;
    }
    else if (tablaM[f][c] == 'B')
    {
        tablaAtaque[f][c] = 'B';
    }
    return check;
}
bool verificarAtaqueM(char tablaH[][10], int filas)
{
    bool check = true;
    if (tablaH[f][c] == '-')
    {
        tablaH[f][c] = 'x';
    }
    else if (tablaH[f][c] == 'B')
    {
        tablaH[f][c] = 'E';
    }
    else if (tablaH[f][c] == 'x' || tablaH[f][c] == 'E')
    {
        check = false;
    }
    return check;
}

// Contador Puntos
void contadorPuntosH(char tablaAtaque[][10], int filas)
{

    if (tablaAtaque[f][c] == 'B')
    {
        contAH++;
    }
    else
    {
        contNH++;
    }
}
void contadorPuntosM(char tablaH[][10], int filas)
{
    if (tablaH[f][c] == 'E')
    {
        contM++;
    }
}

// Mostrar Puntos
void mostrarPuntosH()
{
    printf("Barcos Acertados: %d", contAH);
    printf("\nBarcos No Acertados: %d\n", contNH);
}
void mostrarPuntosM()
{
    printf("Barcos Acertados Maquina: %d\n", contM);
}

// Menu del juego
void menuPrincipal()
{

    titulo();
    barcoImagen();

    printf("\n\n\n1- BATALLA \n");
    printf("2- GANADORES\n");
    printf("3- SALIR\n");
    printf("%c ", 207);
}

// Parte grafica
void titulo()
{

    printf("\033[0;7m");
    printf("   ____ ___  __  __ ____    _  _____ _____   _   _    ___     ___    _      \n");
    printf("  / ___/ _ %c|  %c/  | __ )  / %c|_   _| ____| | %c | |  / %c %c   / / %c  | |     \n", 92, 92, 92, 92, 92, 92, 92);
    printf(" | |  | | | | |%c/| |  _ %c / _ %c | | |  _|   |  %c| | / _ %c %c / / _ %c | |     \n", 92, 92, 92, 92, 92, 92, 92);
    printf(" | |__| |_| | |  | | |_) / ___ %c| | | |___  | |%c  |/ ___ %c V / ___ %c| |___  \n", 92, 92, 92, 92);
    printf("  %c____%c___/|_|  |_|____/_/   %c_%c_| |_____| |_| %c_/_/   %c_%c_/_/   %c_%c_____| \n", 92, 92, 92, 92, 92, 92, 92, 92, 92);
    printf("                                                                            \n");
    printf("\033[0m");
}
void barcoImagen()
{
    printf("\033[1;31m");
    printf("\n	                           _ ._ _ , _ ._\n");
    printf("                                 (_ ' ( ` )_ .__)\n");
    printf("                                 ( ( ( ) `) ) _)  \n");
    printf("            %c%c%c%c             (__ (_ (_ . _) _) ,__)\n", 178, 178, 206, 178);
    printf("           %c%c%c%c%c%c                  `~~`%c '. /`~~` \n", 178, 178, 178, 186, 178, 178, 92);
    printf("          %c%c%c%c%c%c%c%c%c                     ; ; \n", 178, 178, 178, 178, 206, 178, 178, 178, 178);
    printf("       %c %c%c%c%c%c%c%c%c%c%c%c                    / %c \n", 220, 178, 178, 178, 178, 178, 186, 178, 178, 178, 178, 178, 92);
    printf("      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  _____________/_ _%c_____________ \n", 223, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 223, 92);
    printf("\033[0m");
}
void copa()
{
    printf("\033[0;33m");
    printf("\n             ___________\n");
    printf("            '._==_==_=_.'\n");
    printf("            .-%c:      /-.\n", 92);
    printf("           | (|:.     |) |\n");
    printf("            '-|:.     |-'\n");
    printf("              %c::.    /\n", 92);
    printf("               '::. .'\n");
    printf("                 ) (\n");
    printf("              __.' '.__\n");
    printf("              \n");
    printf("\033[0m");
}
void derrota()
{
    printf("\033[1;35m");
    printf("\n       ______\n");
    printf("     .-      -.\n");
    printf("   .'          '.\n");
    printf("  /   O      O   %c\n", 92);
    printf(" :           `    :\n");
    printf(" |                |   \n");
    printf(" :    .------.    :\n");
    printf("  %c  '        '  /\n", 92);
    printf("   '.          .'\n");
    printf("     '-......-'\n");
    printf("\033[0m");
}
void tituloGanador()
{
    printf("\033[1;43m");
    printf("   ____    _    _   _    _    ____   ___  ____  _____ ____   \n");
    printf("  / ___|  / %c  | %c | |  / %c  |  _ %c / _ %c|  _ %c| ____/ ___|  \n", 92, 92, 92, 92, 92, 92);
    printf(" | |  _  / _ %c |  %c| | / _ %c | | | | | | | |_) | |_| %c___ %c  \n", 92, 92, 92, 92, 92);
    printf(" | |_| |/ ___ %c| |%c  |/ ___ %c| |_| | |_| |  _ <| |___ ___) | \n", 92, 92, 92);
    printf("  %c____/_/   %c_%c_| %c_/_/   %c_%c____/ %c___/|_| %c_%c_____|____/  \n", 92, 92, 92, 92, 92, 92, 92, 92, 92);
    printf("                                                             \n");
    printf("\033[0m");
}

// Registro En Archivo De Texto
void escritura()
{

    struct tm *local, *gm;
    time_t t;
    t = time(NULL);
    local = localtime(&t);

    FILE *archivo;

    archivo = fopen("archivo.txt", "a");
    printf("\n\nIngresa tu nombre:\n");
    char nombre[100];
    scanf("%s", nombre);
    fputs(nombre, archivo);
    fputc(' ', archivo);
    fprintf(archivo, "%d/%d/%d", local->tm_mday, local->tm_mon + 1, local->tm_year + 1900);
    fputc('\n', archivo);
    fputc('\n', archivo);
    fclose(archivo);
}
void lectura()
{
    FILE *archivo; /*Objeto capaz de almacenar informacion */
    char caracter;

    archivo = fopen("archivo.txt", "r");

    if (archivo == NULL)
    {
        printf("Error en la apertura del archivo");
    }
    else
    {
        while (!feof(archivo))
        {                              // feof: comprueba el indicador al final del archivo
            caracter = fgetc(archivo); // Funcion de obtiene solo un caracter
            printf("\033[1;96m");
            printf(" %c", caracter);
            printf("\033[0m");
        }
    }
    fclose(archivo);
}
