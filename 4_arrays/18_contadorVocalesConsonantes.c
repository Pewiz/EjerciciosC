// Contar vocales, consonantes y espacios en una oración

#include <stdio.h>

int main()
{
    char frase[100];
    printf("Ingresa una frase: ");
    scanf("%[^\n]", frase);

    int vocales = 0, consonantes = 0, espacios = 0;

    for (int i = 0; frase[i] != '\0'; i++)
    {
        char c = frase[i];

        if (c == ' ')
        {
            espacios++;
        }
        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') || (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))
            {
                vocales++;
            }
            else
            {
                consonantes++;
            }
        }
    }
    printf("\nLa cantidad de espacios es: %d", espacios);
    printf("\nLa cantidad de vocales son: %d", vocales);
    printf("\nLa cantidad de consonantes es: %d", consonantes);

    return 0;
}