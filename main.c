#include "main.h"

int main(void)
{
int contador;
    char z = 'a';
    char *str = "Holberton";
int j = 22;

contador = _printf("H%illo\n", j);
printf("Cantidad de caracteres impresos: %i\n", contador);

    contador = _printf("Hello\n", z);
    printf("Cantidad de caracteres impresos: %i\n", contador);

    contador = _printf("Hola %s!\n", str);  
    printf("Cantidad de caracteres impresos: %i\n", contador);

    contador = _printf("Porcentaje%%\n");  
    printf("Cantidad de caracteres impresos: %i\n", contador);

    contador = _printf("Caracter:%c\n", z);
    printf("Cantidad de caracteres impresos: %i\n", contador);

contador = _printf("%c  a ", z);
    printf("Cantidad de caracteres impresos: %i\n", contador);


return (0);
}
