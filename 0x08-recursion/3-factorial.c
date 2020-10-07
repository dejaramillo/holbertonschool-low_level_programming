#include "holberton.h"
/**
 *factorial - print factorial of a number
 *@n:entry point
 *Return: int
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
