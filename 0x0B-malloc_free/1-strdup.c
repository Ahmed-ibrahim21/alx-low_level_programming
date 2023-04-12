#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - duplicates an array of characters
 * @str : pointer to a string
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
char *cpy;
int len = 0;
while (str[len])
len++;
cpy = malloc(len + 1);
cpy = str;
return (str);
}

