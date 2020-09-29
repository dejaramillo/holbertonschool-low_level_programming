#include "holberton.h"
/**
 *rev_string - print string
 *@s:entry point
 *Return: void
 */

void rev_string(char *s)
{
int i, reverse;
char *lastchar, ch;
lastchar = s;
	for (i = 0; *lastchar != '\0'; i++)
	{
		lastchar++;
	}
	lastchar = lastchar - 1;
	for (reverse = 0; reverse < i / 2; reverse++)
	{
		ch = *lastchar;
		*lastchar = *(s + reverse);
		*(s + reverse) = ch;
		lastchar--;
	}
}
