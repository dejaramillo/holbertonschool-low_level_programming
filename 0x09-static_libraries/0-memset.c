#include "holberton.h"
/**
 * *_memset - print constant byte
 *@s: first entry point
 *@b: second entry point
 *@n: third entry point
 *Return: char
 */

char *_memset(char *s, char b, int n)
{
int i;
	for (i = 0 ; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
