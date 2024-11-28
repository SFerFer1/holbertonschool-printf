#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int manejar_casos_i_d(va_list parametros, int *contador)
{
int n = va_arg(parametros, int);
int cantchar = contar_digitos(n);
int  i = cantchar - 1;
char *numero = crear_espacio(n, cantchar);

if (numero == NULL)
return -1;

if (n == INT_MIN)
{
n = 214748364;
}
else if (n < 0)
n = -n;

 while (n > 0)
{
	numero[i] = (n % 10) + '0';
	n /= 10;
	i--;
}

if (n == 0 && numero[0] != '-')
numero[i] = '0';

write(1, numero, cantchar);

free(numero);
*contador += cantchar;
return (0);
}

int contar_digitos(int num)
{
int contador = 0;


if (num == 0)
{
return (1);
}


if (num < 0)
{
num = -num;
}


while (num > 0)
{
	num /= 10; 
	contador++;  
}
return (contador);
}

char *crear_espacio(int numero, int cantchar)
{
char *num;

if (numero < 0 && numero != INT_MIN)
{
num = malloc(cantchar + 2);
if (num == NULL)
return NULL;
num[0] = '-';
}

else if (numero == INT_MIN)
{
num = malloc(cantchar + 1);
if (num == NULL)
return NULL;
num[0] = '-';
num[1] = '2';
numero = 214748364;
}
else
{
num = malloc(cantchar + 1);
if (num == NULL)
return NULL;
}

return (num);
}
