#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - creates a 2d array of integers
 * @width : the value of the width of the 2d array
 * @height : the value of the height of the 2d array
 * Return: pointer or NULL
 */

int **alloc_grid(int width, int height)
{
int **ptr = malloc(sizeof(*ptr) * height);
int i, j;
if (width <= 0 || height <= 0 || ptr == 0)
{
return (NULL);
}
else
{
for (i = 0 ; i < height ; i++)
{
ptr[i] = malloc(sizeof(**ptr) * width);
if (ptr[i] == 0)
{
while (i--)
free(ptr[i]);
free(ptr);
return (NULL);
}
for (j = 0 ; j < width ; j++)
{
ptr[i][j] = 0;
}
}
}
return (ptr);
}
