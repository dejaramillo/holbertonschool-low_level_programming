#include "holberton.h"
/**
 * print_alphabet - print alphabet whit portotype in main function
 */

void print_alphabet(void)
{
int letter;
for (letter =  97; letter <= 122; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
