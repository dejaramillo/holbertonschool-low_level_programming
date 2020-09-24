#include "holberton.h"
#include <stdio.h>
/**
 *_isdigit - prototype of digit or not digit
 *@n: entry point
 *Return: 0 or 1
 */

int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
