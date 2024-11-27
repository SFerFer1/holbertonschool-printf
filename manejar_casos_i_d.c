#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
int manejar_casos_i_d(char definidor, va_list parametros, int *contador)
{
switch (definidor)
{
int num;
case 'i':
num = va_arg(parametros, int);



break;




}

int contar_digitos(int num)
{
int contador = 0;

if (num < 0)
{
	num = -num;
}
if (num == 0)
{
return 1;
}

while (num > 0)
{
	num /= 10; 
	contador++;  
}
return (contador);
}

