#include "holberton.h"
/**
 * *_strpbrk - searches a string for any of a set of bytes
 *@s: first entry point
 *@accept: second entry point
 *Return: char
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;
char *p = '\0';
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (0);
}
