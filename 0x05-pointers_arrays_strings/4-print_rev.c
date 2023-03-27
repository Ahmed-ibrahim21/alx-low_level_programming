#include "main.h"
/**
 * print_rev -reverses a string
 * @s : string
 */
void print_rev(char *s)
{
int tracker = 0;
int counter;
while (*s != '\0')
{
tracker++;
s++;
}
s--;
for (counter = tracker ; counter > 0 ; counter--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
