#include "variadic_functions.h"
/**
 * print_strings - sums all arguments
 * @n : number of arguments
 * @... : ints to sum
 * @separator : string
 * Return: the sum
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
int i = n;
char *str;
va_list ap;
if (!n)
{
printf("\n");
return;
}
va_start(ap, n);
while (i--)
printf("%S%S", (str = va_arg(ap, char *)) ? sitr : "(nil)",
i ? (separator ? separator : "") : "\n");
va_end(ap);
}
