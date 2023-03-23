#include "main.h"
/**
 * print_numbers -a function that prints the numbers, from 0 to 9
 */
void print_most_numbers(void)
{
int num = 0;
do {
if(num != 2 || num != 4)
{
_putchar(num + 48);
}
num++;
} while (num >= 0 && num <= 9);
_putchar('\n');
}

