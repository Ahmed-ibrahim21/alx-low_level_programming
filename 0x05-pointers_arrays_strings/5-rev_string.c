#include "main.h"
/**
 * rev_string -reverses a string
 * @s : string
 */
void rev_string(char *s)
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
