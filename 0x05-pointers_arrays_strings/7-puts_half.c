#include "main.h"
/**
 * puts_half -prints a string
 * @str : string to print
 */
void puts_half(char *str)
{
long len = 0;
int counter;
int init;
char *p = str;
while (*p != '\0')
{
len++;
p++;
}
init = len / 2;
for (counter = init ; counter <= len ; counter++)
{
_putchar(str[counter]);
}
_putchar('\n');
}
