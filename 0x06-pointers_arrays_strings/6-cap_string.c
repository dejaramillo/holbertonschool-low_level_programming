#include "holberton.h"
/**
 * *cap_string - print cap string
 *@ch: entry point
 *Return: char
 */

char *cap_string(char *ch)
{
	int i, sy;
	char symbol[13] = {32, 9, 10, 44, 59, 46, 33, 63, 40, 41, 34, 123, 125};
		for (i = 0; ch[i] != '\0'; i++)
		{
			for (sy = 0; sy < 13; sy++)
			{
				if (ch[i] == symbol[sy] && ch[i + 1] >= 'a' && ch[i + 1] <= 'z')
				{
					ch[i + 1] -= 32;
				}
				if (ch[0] >= 'a' && ch[0] <= 'z')
				{
					ch[0] -= 32;
				}
			}
		}
		return (ch);
}
