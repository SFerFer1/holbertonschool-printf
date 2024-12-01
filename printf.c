#include "main.h"
/**
 * _printf - A custom implementation of parts of printf function.
 * @format: The format string that specifies how to format the output.
 *
 * Return: The number of characters printed, or 0 if the format is NULL.
 */
int _printf(const char *format, ...)
{
va_list words;
int con;
if (format == NULL)
{
write(1, "", 1);
con = -1;
return (con);
}
else if (format[0] == '%' && format[1] == '\0')
{
write(1, "%", 1);
con = 1;
return (con);
}
else
{
con = recorrer_string(format, words);
return (con);
}

va_end(words);
return (0);
}
