#include "main.h"
#include <stdlib.h>
#include <stdio.h> 

/**
 * malloc_checked - Allocates memory using malloc.
 *
 * @b: The number of bytes to allocate.
 *
 * Return: On success, a pointer to the allocated memory.
 *         On failure, the function causes normal process termination
 *         with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
