#include <stdio.h>
/**
 * main - 09-29
 * Return: retunr 0
 */

int main(void)
{
int n, i, count;
count = 2;
for (n = 0; n <= 99; n++)
{
putchar((n / 10) + '0');
putchar((n % 10) + '0');
if (n < 99)
{
putchar(',');
putchar(' ');
}
if (n == 9 || n == 19 || n == 29 || n == 39 || n == 49 || n == 59 || n == 69 || n == 79 || n == 89)
{
do {
i += 2;
n = n + count;
count++;
} while (i <= 1);
i--;
}
}
putchar('\n');
return (0);
}
