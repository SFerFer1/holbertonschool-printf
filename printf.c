#include "main.h"
int _printf(const char *format, ...)
{
va_list words;
va_list copia;
va_start(words, format);
va_start(copia, format);


recorrer_string(format,copia);
va_end(copia);

va_end(words);
return (1);
}
