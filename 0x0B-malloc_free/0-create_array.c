#include "main.h"

/**
 * *create_array - creats an array of characters
 * @size : size of array
 * @c : char intialized
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
char *arr = malloc(size);
if (size == 0 || arr == 0)
return (0);
while (size--)
arr[size] = c;
return (arr);
}


