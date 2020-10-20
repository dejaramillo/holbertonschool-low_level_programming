#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **str_concat - concat two strings
 *@s1: first entry point
 *@s2: second entry point
 *Return: char
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l, m;
	char *s = NULL;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0 ; s1[i]; i++)
	{}
	for (j = 0; s2[j]; j++)
	{}
	s = malloc((i + j) * sizeof(char) + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (l = i, m = 0; l < i + j; l++, m++)
		s[l] = s2[m];
	s[i + j] = '\0';
	return (s);
}
