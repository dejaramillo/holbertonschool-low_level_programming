#include "holberton.h"
/**
 *_strcmp - compare two strings
 *@s1: first entry point
 *@s2: second entry point
 *Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i, diff;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
		if (s1[i] == s2[i])
		{
			diff = 0;
		}
		else
		{
			diff = s1[i] - s2[i];
			return (diff);
		}
	return (diff);
}
