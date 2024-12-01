#include "main.h"
#include <limits.h>
/**
 * main - Entry point for testing the _printf function.
 *
 * This function tests
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
_printf(NULL);

_printf("%d", INT_MIN);
_printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
_printf("%i", INT_MIN);
_printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

return (0);
}
