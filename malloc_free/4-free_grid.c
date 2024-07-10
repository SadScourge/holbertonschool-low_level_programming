#include "main.h"
#include <stdlib.h>

/**
 *free_grid - free the memory of the previously allocated space
 *@grid: the grid to free
 *@height: height of the grid
*/
void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
	{
		free(grid[count]);
	}
	free(grid);
}
