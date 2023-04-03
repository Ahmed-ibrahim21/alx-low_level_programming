#include "main.h"
/**
 * _memcpy -  a function that copies memory area.
 * @src : array of string
 * @dest : array to be copied into
 * @n : unsigned int
 * Return: the two string combined
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
{
dest[i] = src[i];
}
return (dest);
}

