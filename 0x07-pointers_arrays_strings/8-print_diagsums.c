#include "holberton.h"
#include "stdio.h"
/**
 * print_diagsums - Function that prints the sum of the two diagonals of matrix
 *@a: first entry point
 *@size: second entry point
 *Return: void
 */

void print_diagsums(int *a, int size)
{
long int i, result1, result2;
	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
		{
			result1 += *(a + i);
		}

		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
		{
			result2 += *(a + i);
		}
	}
	printf("%ld, %ld\n", result1, result2);
}
