#include "main.h"
int _printf(const char *format, ...)
{
va_list words;
va_start(words, format);

recorrer_string(format,words);

va_end(words);
return (1);
}
