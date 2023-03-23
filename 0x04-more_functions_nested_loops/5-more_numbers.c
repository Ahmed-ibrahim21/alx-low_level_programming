#include "main.h"
/**
 * more_numbers -a function that prints the numbers, from 0 to 14 ten times
 */
void more_numbers(void)
{
int num = 0;
int i = 0;
for (i = 0 ; i < 10 ; i++)
{num = 0;
do {
if (num > 9)
{
_putchar (49);
}
_putchar((num % 10) + 48);
num++;
} while (num >= 0 && num <= 14);
_putchar('\n'); }
_putchar('\n');
}
