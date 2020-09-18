#include <stdio.h>
/**
 * main - Print a string using printf
 *
 * Return: loop
 */
int main(void)
{
char letter = 97;
while (letter <= 122)
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
