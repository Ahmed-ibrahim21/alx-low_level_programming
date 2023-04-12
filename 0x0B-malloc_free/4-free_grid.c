#include "main.h"
#include <stdlib.h>
/**
 * *free_grid - free an allocated memory
 * @**grid : array
 * @height : height of array
 */

void free_grid(int **grid, int height)
{
int i = 0;
for (; i < height ; i++)
free(grid[i]);
free(grid);
}
