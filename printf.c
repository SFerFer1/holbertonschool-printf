#include "main.h"
int _printf(const char *format, ...)
{
va_list words;
int contador;

va_start(words, format);



if (format == NULL)
{
write(1, "(null)", 6);
return(6);
}


contador = recorrer_string(format, words);



va_end(words);
return (contador);
}
