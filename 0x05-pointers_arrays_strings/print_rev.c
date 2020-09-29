#include "holberton.h"
/**
 *print_rev - print string
 *@s:entry point
 *Return: void
 */

void print_rev(char *s)
{
	int count, reverse;
	for (count = 0; s[count] != '\0'; count++)
	{
	}
	for (reverse = count; reverse >= 0; reverse--)
	{
		_putchar(s[count]);
	}
	_putchar(10);
}
