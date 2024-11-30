#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
/**
 * manejar_casos_i_d - A function that handles the %c and %s.
 * @parametros: The list of arguments.
 * @contador: A pointer to contador.
 *
 * Return: Always returns 0.
 */
int manejar_casos_i_d(va_list parametros, int *contador)
{
int n = va_arg(parametros, int);
int cantchar = contar_digitos(n);
int  i = cantchar - 1;
char *numero = crear_espacio(n, cantchar);

if (numero == NULL)
return (-1);
if (n < 0 && n != -2147483648)
{
numero[0] = '-';
n = -n;
}
if (n == INT_MIN)
{
free(numero);
write(1, "-2147483648", 11);
*contador += 11;
return (0);
}
if (n == 0)
{
numero[0] = '0';
write(1, numero, 1);
*contador += 1;
free(numero);
return (0);
}
while (n > 0)
{
	numero[i] = (n % 10) + '0';
	n /= 10;
	i--;
}
write(1, numero, cantchar);
free(numero);
*contador += cantchar;
return (0);
}
/**
 * contar_digitos - Count the number of digits in an integer.
 * @num: The integer that is counted.
 *
 * Return: The number of digits in the integer.
 */
int contar_digitos(int num)
{
int contador = 0;
int vi = num;

if (vi == 0)
{
return (1);
}


if (vi < 0)
{
vi = -vi;
contador++;
}


while (vi > 0)
{
	vi /= 10;
	contador++;
}
return (contador);
}
/**
 * crear_espacio - Creates a malloc for a number.
 * @numero: The number.
 * @cantchar: The number of characters required to store the number.
 *
 * Return: A malloc, or NULL if malloc fails.
 */
char *crear_espacio(int numero, int cantchar)
{
char *num;

if (numero >= 0)
{
num = malloc(cantchar + 1);
if (num == NULL)
return (NULL);
}
else
{
num = malloc(cantchar + 2);
}

return (num);
}
