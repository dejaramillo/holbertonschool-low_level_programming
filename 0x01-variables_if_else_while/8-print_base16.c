#include <stdio.h>

/**
 * main - print of number and letters
 *
 * Return: loop for
 */

int main(void)
{
int lt, n;
for (n = '0'; n <= '9'; n++)
putchar(n);
for (lt = 'a'; lt <= 'f'; lt++)
putchar(lt);
putchar('\n');
return (0);
}
