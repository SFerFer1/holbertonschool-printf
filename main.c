#include "main.h"
#include <limits.h>

int main(void)
{
 _printf(NULL);

 _printf("%d", INT_MIN);
 _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
 _printf("%i", INT_MIN);
 _printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

return (0);
}
