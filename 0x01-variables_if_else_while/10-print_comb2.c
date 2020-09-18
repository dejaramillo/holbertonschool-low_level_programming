#include <stdio.h>
/**
 * main - 0-99
 * Return: returns 0
 */

int main(void)
{
int n;
for (n = 0; n <= 99; n++)
{
putchar((n / 10) + '0');
putchar((n % 10) + '0');
if (n < 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
