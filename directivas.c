#include <stdio.h> // Busca en los encabezados de la biblioteca estandar
#define PI 3.14159 // Crea constantes simbolicas y macros
#define CUBO(a) a*a*a // Macro

int main()
{
//    int suma;
//    suma = PI + 3;

    int a = 3;
    printf("El cubo de nuestra macro es: %i\n", CUBO(a));

    return 0;
}