#include "main.h"
/**
 * _strspn - a function that locates a character in a string.
 * @s : array of string
 * @accept : character to be searched for
 * Return: location of char first appearance or NULL
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
unsigned int j;
for (i = 0 ; s[i] != '\0' ; i++)
{
for (j = 0 ; accept[j] != s[i]  ; j++)
{
if (accept[j] == '\0')
{
return (i);
}
}
}
return (i);
}
