#include "holberton.h"
/**
 * *_strchr - locates character in a string
 *@s: first entry point
 *@c: second entry point
 *Return: char
 */

char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == '\0')
			return ('\0');
}
