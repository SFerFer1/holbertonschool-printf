#include "main.h"
#include <stdarg.h>
/**
 * recorrer_string - A function that receives a string and a
 *                  va_list and calls functions that print.
 * @str: The format string to process.
 * @parametros: The list of arguments to be printed, passed by reference.
 *
 * Return: The number of characters printed.
 */
int recorrer_string(const char *str, va_list parametros)
{
int contador = 0;

	while (*str != '\0')
	{
		if (*str == '\\' && *(str + 1) == 'n')
		{

			write(1, "\n", 1);
			str++;
		}
	if (*str == '%')
	{
		switch (*(str + 1))
		{
		case '%':
		case 'c':
		case 's':
		manejar_c_s(*(str + 1), parametros, &contador);
		str++;
		break;
		case 'i':
		case 'd':
		manejar_casos_i_d(parametros, &contador);
		str++;
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
