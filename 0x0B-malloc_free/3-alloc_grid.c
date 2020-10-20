#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - pointer in arraty two dimensions
 *@width: first entry point
 *@height: second entry point
 *Return: int
 */

int **alloc_grid(int width, int height)
{
int **a, i, j;
	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(a[i]);
			}
			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
