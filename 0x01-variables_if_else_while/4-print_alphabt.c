#include <stdio.h>

/**
 * main - Print a string using puchar
 *
 * Return: loop
 */

int main(void)
{
char lt;
for (lt = 'a'; lt <= 'z'; lt++)
{
if (lt == 'q' || lt == 'e')
{
lt++;
}
putchar(lt);
}
putchar('\n');
return (0); }
