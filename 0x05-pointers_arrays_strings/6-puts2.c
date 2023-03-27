#include "main.h"
/**
 * puts2 -prints a string
 * @str : string to print
 */
void puts2(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str = str + 2;
}
putchar('\n');
}
