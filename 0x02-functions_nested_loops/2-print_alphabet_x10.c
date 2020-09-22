#include "holberton.h"
/**
 * print - print alphabet x 10 with loop for
 */

void print_alphabet_x10()
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
