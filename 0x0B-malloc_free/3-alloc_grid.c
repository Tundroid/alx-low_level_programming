#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* alloc_grid - create a 2d array and returns pointer to it
* @width: number of columns
* @height: number of rows
*
* Return: array pointer to 2d array or null on failure
*/
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));
	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = (int *)malloc(width * sizeof(int));
			if (grid[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(grid[j]);
				free(grid);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}
	}
	return (grid);
}
