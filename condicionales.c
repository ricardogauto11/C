#include <stdio.h>

int main()
{
    int edad;

    printf("Ingresa tu edad: ");
    scanf("%d", &edad);

    if (edad >= 18)
    {
        printf("Eres mayor de edad\n");
    } else {
        printf("Eres menor de edad\n");
    }
} /* Fin del metodo main */