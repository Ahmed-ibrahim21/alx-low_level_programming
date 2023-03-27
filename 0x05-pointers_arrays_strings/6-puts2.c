#include "main.h"
/**
 * puts2 -prints a string
 * @str : string to print
 */
void puts2(char *str)
{
int i = 0;
int r = 0;
int p;
char *c = str;
while (*c != '\0')
{
c++;
i++;
}
r = i - 1;
for (p = 0 ; p <= r ; p++)
{
if (p % 2 == 0)
{
_putchar(str[p]);
}
}
_putchar('\n');
}
