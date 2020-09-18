#include <stdio.h>

/**
 * main - print reverse alphabet whit putchar
 *
 * Return: loop whit for or while
 */

int main(void)
{
int lt;
for (lt = 'z'; lt >= 'a'; lt--)
{
putchar(lt);
}
putchar('\n');
return (0);
}
