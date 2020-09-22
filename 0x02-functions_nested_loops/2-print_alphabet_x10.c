#include "holberton.h"
/**
 * print_alphabet_x10 - Print x10 alpha
 * Return: 0
 */

void print_alphabet_x10(void)
{
int x10, letter;
for (x10 = 0; x10 <= 9; x10++)
{
for (letter = 97; letter <= 122; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
