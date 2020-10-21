#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - free memory
 *@grid: first entry point
 *@height: second entry point
 *Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
