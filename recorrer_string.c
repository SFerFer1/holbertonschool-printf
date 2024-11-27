#include "main.h"
#include <stdarg.h>
/**
 * _printf - Funcion que simula printf
 * @format: Cadena que contiene los especificadores de formato
 * Return: Nada
 */
int recorrer_string(const char *str, va_list parametros)
{
char c;
int contador = 0;
	while (*str != '\0')
	{
		if (*str == '\\' && *(str + 1) == 'n')
		{
			write(1, "\n", 1);
			str++, contador++;
		}
	if (*str == '%')
	{
		switch (*(str + 1))
		{
			case '%':
			write(1, "%", 1);
			str++, contador++;
			break;
			case 'c':
			c = (char) va_arg(parametros, int);
			write(1, &c, 1);
			str++, contador++;
			break;

			default:
			write(1, str, 1);
			contador++;
			break;
		}
	}
	else
	{
	write(1, str, 1);
	contador++;
	}

	str++;
	}
return (contador);
}
