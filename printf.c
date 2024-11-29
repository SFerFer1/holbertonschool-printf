#include "main.h"
int _printf(const char *format, ...)
{
va_list words;
int con;

va_start(words, format);



if (format == NULL)
{
con = 0;
}
else
con = recorrer_string(format, words);



va_end(words);
return (con);
}
