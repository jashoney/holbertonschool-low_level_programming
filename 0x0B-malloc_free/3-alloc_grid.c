#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - points to a 2 dim array of ints
 * @width: width of the array
 * @height: height of the array
 * Return: ptr to the array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i = 0, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(*ptr));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	while (i < height)
	{
		ptr[i] = malloc(width * sizeof(*ptr[i]));
		if (ptr[i] == NULL)
		{
			j = 0;
			while (j <= i)
			{
				free(ptr[j]);
				j++;
			}
			free(ptr);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ptr);
}
