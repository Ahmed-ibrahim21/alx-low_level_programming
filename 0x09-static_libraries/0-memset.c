#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s : array of string
 * @b : constant byte
 * @n : unsigned int
 * Return: the two string combined
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
{
s[i] = b;
}
return (s);
}

