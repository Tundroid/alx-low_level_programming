#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* free_grid - free memory allocation to a 2d array
* @grid: 2d array
* @height: number of rows
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
