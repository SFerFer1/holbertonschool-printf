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
int con = 0;
va_start(words, format);

con = recorrer_string(format, words);


va_end(words);
return (con);
}
