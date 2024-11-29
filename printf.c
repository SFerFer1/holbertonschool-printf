#include "main.h"
int _printf(const char *format, ...)
{
va_list words;
int con;

va_start(words, format);



if (format == NULL)
{
con = 0;
return (con);
}
else
{
con = recorrer_string(format, words);
return (con);
}

va_end(words);
return (con);
}
