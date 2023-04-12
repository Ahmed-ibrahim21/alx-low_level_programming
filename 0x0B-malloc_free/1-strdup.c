#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - duplicates an array of characters
 * @str : pointer to a string
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
if (*str == NULL)
return (NULL);
char *arr;
char *p;
int len = 0;
while (str[len])
len++;
arr = malloc(len + 1);
p = arr;
while (*str)
*p++ = *str++;
*p = '\0';
return (arr);
}

