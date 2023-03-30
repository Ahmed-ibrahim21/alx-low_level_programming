#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest : first string
 * @src : second string
 * @n : number of bytes to copy
 * Return: the two string combined
 */
char *_strncat(char *dest, char *src, int n)
{
int c, c2;
c = 0;
while (dest[c])
c++;
for (c2 = 0 ; c2 < n && src[c2] != '\0' ; c2++)
{
dest[c + c2] = src[c2];
}
dest[c + c2] = '\0';
return (dest);
}

