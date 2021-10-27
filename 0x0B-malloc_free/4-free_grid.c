#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - prints a grid of integers
 * @grid: address of the 2d grid
 * @height: height of the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0 ; x < height ; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
