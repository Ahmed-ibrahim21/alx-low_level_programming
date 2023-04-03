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
int check = 0;
for (i = 0 ; s[i] != '\0' ; i++)
{
if (check == 1)
{
return (i - 1);
}
for (j = 0 ; accept[j] != '\0' ; j++)
{
if (s[i] == accept[j])
{
check = 0;
break;
}
check = 1;
}
}
}

