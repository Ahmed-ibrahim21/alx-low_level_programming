#include "main.h"

/**
 * print_array - a function to print an array
 * @a: array name
 * @n: number of elements in the array
 */
void print_array(int *a, int n)
{
int i;
for (i = 0 ; i < n ; i++)
{
printf("%d, ",a[i]);
}
if (i == (n - 1))
{
printf("%d", a[n-1]);
}
printf("\n");
}
