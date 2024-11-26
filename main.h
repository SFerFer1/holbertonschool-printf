#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#ifndef MAIN_H
#define MAIN_H
int _printf(const char *format, ...);
void recorrer_string(const char *str , va_list parametros);
#endif /* MAIN_H */

