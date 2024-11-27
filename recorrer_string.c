#include "main.h"
#include <stdarg.h>
/**
 * _printf - Funcion que simula printf
 * @format: Cadena que contiene los especificadores de formato
 * Return: Nada
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


