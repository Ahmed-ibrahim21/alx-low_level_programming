#include "main.h"
/**
 * more_numbers -a function that prints the numbers, from 0 to 14 ten times
 */
void more_numbers(void)
{
int num = 0;
int i;
for (i = 0 ; i < 10 ; i++)
{
do {
_putchar(num + 48);
num++;
} while (num >= 0 && num <= 14);
}
_putchar('\n');
}
