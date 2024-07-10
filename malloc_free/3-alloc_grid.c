#include "main.h"
#include <stdlib.h>

/**
 ***alloc_grid - allocate the space for a 2D array and init it with 0
 *@width: width of the grid
 *@height: height of the grid
 *Return: pointer to the grid if suceed or NULL otherwise
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int count1;
	int count2;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (count1 = 0; count1 < height; count1++)
	{
		grid[count1] = malloc(width * sizeof(int));
		if (grid[count1] == NULL)
		{
			return (NULL);
		}
		for (count2 = 0; count2 < width; count2++)
		grid[count1][count2] = 0;
	}
	return (grid);
}
