include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n : is the number of times for the '\' char
 */

void print_diagonal(int n)
{
int x, space;
if (n <= 0)
_putchar('\n');
else
{
for (x = 1 ; space <= x ; x++)
{
for (space = 1 ; space <= x ; space++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
}
