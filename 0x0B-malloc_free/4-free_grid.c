#include "main.h"

/**
* free_grid - free memory
* @grid: array 2d to free
* @height: size of line to free
*/

void free_grid(int **grid, int height)
{
	unsigned int size = 0;

	for (size = 0; size < height; size++)
	{
		free(grid[size]);
		grid[size] = NULL;
	}
}
