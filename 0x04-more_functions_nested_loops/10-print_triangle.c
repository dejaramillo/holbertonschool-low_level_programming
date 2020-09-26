#include "holberton.h"
/**
 *print_triangle - print square whit white space
 *@n: entry point
 *Return: void
 */

void print_triangle(int n)
{
int row, column;
	for (row = 1; row <= n; row++)
	{
		for (column = 0; column < n; column++)
		{
			if ((row + column) < n)
			{
				_putchar(' ');
			}
			else if ((row + column) >= n)
			{
				_putchar('#');
			}
		}
		_putchar(10);
	}
	if (n <= 0)
	{
		_putchar(10);
	}
}
