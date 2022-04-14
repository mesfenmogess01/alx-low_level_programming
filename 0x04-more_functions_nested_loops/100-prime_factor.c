#include <stdio.h>

/**
 * main - print facter of number
 *
 * Return: int
 */

int main(void)
{
unsigned long n, i, max;
n = 6128524751443;
max = 1;

for (i = 3; i <= n; i+=2)
{
while (n % i == 0)
{
max = n;
n = n / i;
}
}
printf("%lu\n", max);
return (0);
}
