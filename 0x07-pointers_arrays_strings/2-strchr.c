#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s : array of string
 * @c : character to be searched for
 * Return: location of char first appearance or NULL
 */
char *_strchr(char *s, char c)
{
char *p = NULL;
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
p = &s[i];
return (p);
}
i++;
}
return (p);
}

