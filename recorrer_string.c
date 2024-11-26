#include "main.h"
#include <stdarg.h>

/**
 * _printf - Funcion que simula printf 
 * @format: Cadena que contiene los especificadores de formato
 * Return: Nada
 */
 
void recorrer_string(const char *str , va_list parametros)
{
	char c;
	
	
	while (*str != '\0')
	{
		if (*str == '\\' && *(str + 1) == 'n')
		{
			write(1,"\n", 1);
			str ++;
		}
		else if (*str == '%' && *(str + 1) == '%')
		{
			write(1,"%", 1);
			str ++;
		}
		else if (*str == '%' && *(str + 1) == 'c')
		{
			c = (char) va_arg(parametros, int);
			write(1, &c, 1);
			str++;
		}

		else
		{
			write(1, str, 1);
		}
		
		str++;
	}
	
	
}
