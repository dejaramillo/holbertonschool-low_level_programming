#include "holberton.h"
/**
 * _strspn - print string
 *@s: first entry point
 *@accept: second entry point
 *Return: unsigned char
 */

unsigned int _strspn(char *s, char *accept)
{
	int i,j, count;
	for (i = 0; s[i]; i++)
	{
		for (j = 0, count = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				count = 1;
		}
		if (count == 0)
			return (i);
	}
	return (i);
}
