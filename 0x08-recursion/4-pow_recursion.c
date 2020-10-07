#include "holberton.h"
/**
 *_pow_recursion - print pow of the number x
 *@x: first entry point
 *@y: second entry point
 *Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
