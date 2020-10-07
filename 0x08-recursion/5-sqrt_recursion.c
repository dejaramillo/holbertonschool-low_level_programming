#include "holberton.h"
/**
 * powsqrt - search number of sqrt
 *@n: first entry point
 *@m: second entry point
 *Return: int
 */

int powsqrt(int n, int m)
{
	if ((m * m) == n)
	{
		return (m);
	}
	else if ((m * m) < n)
	{
		return (powsqrt(n, m + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 *_sqrt_recursion - take the initial parameter
 *@n: entry point
 *Return:int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (powsqrt(n, 2));
	}
}
