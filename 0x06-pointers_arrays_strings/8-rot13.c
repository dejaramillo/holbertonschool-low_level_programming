#include "holberton.h"
/**
 * *rot13  - print number for string
 *@ch: entry point
 *Return: char
 */

char *rot13(char *ch)
{
int lenght, lenght1;
char cha[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
char charot13[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
	for (lenght = 0; ch[lenght] != '\0'; lenght++)
	{
		for (lenght1 = 0; cha[lenght1] != '\0'; lenght1++)
		{
			if (ch[lenght] == cha[lenght1])
			{
				ch[lenght] = charot13[lenght1];
				break;
			}
		}
	}
	return (ch);
}
