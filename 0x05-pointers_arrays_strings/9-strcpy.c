#include "main.h"
/**
 * _strcpy -copies a string
 * @src : string to be copied
 * @dest : string that copies
 * Return : destination array
 */
char *_strcpy(char *dest, char *src)
{
int len = 0;
int i;
char *p = src;
while (*p != '\0')
{
len++;
p++;
}
len++;
for (i = 0 ; i < len ; i++)
{
dest[i] = src[i];
}
return (dest);
}
