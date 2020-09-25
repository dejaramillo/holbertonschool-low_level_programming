#include "holberton.h"
/**
 * print_square - print the square
 * @n: entry point
 * Return: void
 */

void print_square(int n)
{
int row, column;
for (row = 0; row < n; row++)
{
for (column = 0; column < n; column++)
{
_putchar('#');
}
_putchar('\n');
}
}
