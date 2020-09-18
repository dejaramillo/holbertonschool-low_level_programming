#include <stdio.h>
/**
 * main - print combination number
 *
 * Return: loop for whit numbers
 */

int main(void)
{
char n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
if (n < '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
