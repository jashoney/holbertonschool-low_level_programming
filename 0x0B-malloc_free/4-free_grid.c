#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees up memory
 * @grid: ptr to a ptr of integers
 * @height: the number of ptr to integers
 * Return: is void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
