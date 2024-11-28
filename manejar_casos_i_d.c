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
char *numero = crear_espacio(n,cantchar);

if (numero == NULL)
return -1;


if (n < 0)
{
numero[0] = '-';
n = -n;
}

if (n == 0)
{
numero[0] = '0';
write(1, numero, 1);
*contador += 1;
free(numero);
return 0;
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

char *crear_espacio(int numero, int cantchar)
{
char *num;

if (numero >= 0)
{
num = malloc(cantchar + 1);
if (num == NULL)
return NULL;
}
else
{
num = malloc(cantchar + 2);
}

return (num);
}
