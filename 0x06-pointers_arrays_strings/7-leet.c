#include "holberton.h"
/**
 * *leet  - print number for string
 *@ch: entry point
 *Return: char
 */

char *leet(char *ch)
{
int lenght, lenght1;
char cha[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
char num[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	for (lenght = 0; ch[lenght] != '\0'; lenght++)
	{
		for (lenght1 = 0; lenght1 < 10; lenght1++)
		{
			if (ch[lenght] == cha[lenght1])
			{
				ch[lenght] = num[lenght1];
			}
		}
	}
	return (ch);
}
