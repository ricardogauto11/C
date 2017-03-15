#include <stdio.h>

int main()
{
    int num1, num2, res, a=12, b=3;

    printf("Ingrese primer valor: ");
    scanf("%d", &num1);
    printf("Segundo valor: ");
    scanf("%d", &num2);
    res = a * (num1 + num2) + b * (b + num2);
    printf("El resultado de la operacion es: %d\n", res);

    return 0;
}