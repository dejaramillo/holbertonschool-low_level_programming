#include "holberton.h"
/**
 *verif - verification of a prime number
 *@n: first entry point
 *@m: second entry point
 *Return: int
 */

int verif(int n, int m)
{
	if (n % m == 0 && n == m)
	{
		return (1);
	}
	else if (n % m == 0 && m < n)
	{
		return (0);
	}
	return (verif(n, m + 1));
}

/**
 *is_prime_number - print true or false
 *@n: entry point
 *Return: int
 */

int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	else if (n <= 0)
	{
		return (0);
	}
	return (verif(n, 2));
}
