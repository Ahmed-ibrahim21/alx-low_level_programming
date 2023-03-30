#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest : first string
 * @src : second string
 * @n : number of bytes to copy
 * Return: the two string combined
 */
char *_strcat(char *dest, char *src, int n)
{
int c, c2 = 0;
c = 0;
while (dest[c])
c++;
while (n--)
{
dest[c] = src[c2];
c++;
c2++;
}
return (dest);
}

