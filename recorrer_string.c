#include "main.h"
void recorrer_string(const char *str)
{
while (*str != '\0')
{
if (*str == '\\' && *(str + 1) == 'n')
{
	write(1,"\n", 1);
str += 2;
}
else
write(1, str, 1);

str++;
}

}

