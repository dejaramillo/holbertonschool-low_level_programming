#include "holberton.h"
/**
 * _puts_recursion - print strinh holberton school
 *@s: entry point
 *Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
