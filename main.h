#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
int _printf(const char *format, ...);
int recorrer_string(const char *strZZ, va_list parametros);
int manejar_c_s(char definidor, va_list parametros, int *contador);
int manejar_casos_i_d(va_list parametros, int *contador);
int contar_digitos(int num);
char *crear_espacio(int numero, int cantchar);
#endif /* MAIN_H */

