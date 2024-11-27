#include "main.h"
#include <unistd.h>
#include <stdarg.h>
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
		while (*string != '\0')
		{
		write(1, string, 1);
		(*contador)++;
		string++;
		}
	break;
}

return (0);
}
