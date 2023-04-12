#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - duplicates an array of characters
 * @str : pointer to a string
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
if (str == "")
return;
int len = 0;
int counter = 0;
char *arr;
if (str == NULL)
return (NULL);
while (str[len])
len++;
arr = malloc(len  *sizeof(*str) + 1);
if (arr == NULL || len == 0)
return (NULL);
while (str[counter])
{
arr[counter] = str[counter];
counter++;
}
return (arr);
}

