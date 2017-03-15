#include <stdio.h>

int main()
{
  char va_c = 'y'; // Tamano de 1byte. Rango 0..255
  int va_int = 20; // Tamano de 2bytes. Rango -32768..32677
  short va_corto = -1; // Tamano 2bytes. Rango -128..127
  unsigned int va_sinsigno = 25; // Tamano 2bytes. Rango 0..65535
  long va_long = 5932; // Tamano 4bytes. Rango -2147483648..2147483647
  float va_float = 72.5189; // Tamano 4bytes. Range so high
  double va_double = 12345.916392; // Tamano 8bytes. Range too much high

  printf("Char: %c\n", va_c);
  printf("Integer: %i\n", va_int);
  printf("Entero corto: %i\n", va_corto);
  printf("Entero sin signo: %i\n", va_sinsigno);
  printf("Entero largo: %li\n", va_long);
  printf("Decimal: %.2f\n", va_float); // Con .2 rendondea dos decimales despues del punto
  printf("Doble: %.2lf\n", va_double);

  return 0;
}