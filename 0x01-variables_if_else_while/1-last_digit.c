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
int last_num;
last_num = n % 10;
if (last_num > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, last_num);
}
if (last_num == 0)
{
printf("last digit of %d is %d and is 0\n", n, last_num);
}
if (last_num < 6)
{
printf("last digit of %d is %d and is and is less than 6 and not 0\n", n, last_num);
}
return (0);
}
