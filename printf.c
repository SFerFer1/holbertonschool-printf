#include "main.h"
int _printf(const char *format, ...)
{
va_list words;
int contador;

va_start(words, format);



if (format == NULL)
{
contador = 0;
}
else
contador = recorrer_string(format, words);



va_end(words);
return (contador);
}
