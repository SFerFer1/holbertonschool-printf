#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * manejar_c_s - The function that handles the '%c' , '%s' and '%%'.
 * @definidor: The character that can be s, c or %.
 * @parametros: The list of arguments .
 * @contador: A pointer to the integer contador.
 *
 * Return: Always returns 0.
 */
int manejar_c_s(char definidor, va_list parametros, int *contador)
{
char c;
char *string;

switch (definidor)
{
	case '%':
	write(1, "%", 1);
	(*contador)++;
	break;
	case 'c':
	c = (char) va_arg(parametros, int);
	write(1, &c, 1);
	(*contador)++;
	break;
	case 's':
	string = va_arg(parametros, char *);
if (string == NULL)
{
write(1, "(null)", 6);
(*contador) += 6;
}
	else
	{
		while (*string != '\0')
		{
		write(1, string, 1);
		(*contador)++;
		string++;
		}
	}

	break;



}
return (0);
}
