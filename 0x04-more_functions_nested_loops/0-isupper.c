#include "holberton.h"
#include <stdio.h>
/**
 *_isupper - prototype that check is uppercase
 *@n: entry point
 *Return: void
 */

int _isupper(int n)
{
	if (n == 'A' || n == 'Z')
	{
		return (1);
	}
	else if (n == 'a' || n <= 'z')
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
