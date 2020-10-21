#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *int_index - search the interger
 *@array: array the numbers
 *@size: number of elements in the array
 *@cmp: pointer at the function
 *Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
