#include <stdio.h>

int main()
{
    int num1, num2, resultado;
    
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Segundo valor: ");
    scanf("%d", &num2);
    resultado = num1 + num2;
    printf("El resultado de la suma es: %d\n", resultado);

    return 0;
}