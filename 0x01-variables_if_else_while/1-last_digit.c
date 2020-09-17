#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - Print a string using printf
 *
 * Return: conditional
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int ln;
ln = n % 10;
if (ln > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, ln);
}
if (ln == 0)
{
printf("last digit of %d is %d and is 0\n", n, ln);
}
if (ln < 6)
{
printf("last digit of %d is %d and is and is less than 6 and not 0\n", n, ln);
}
return (0);
}
