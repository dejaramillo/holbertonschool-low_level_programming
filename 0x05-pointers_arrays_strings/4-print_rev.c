#include "holberton.h"
/**
 *print_rev - print string
 *@s:entry point
 *Return: void
 */

void print_rev(char *s)
{
int i, reverse;
	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (reverse = i - 1; reverse >= 0; reverse--)
	{
		_putchar(s[reverse]);
	}
	_putchar(10);
}
