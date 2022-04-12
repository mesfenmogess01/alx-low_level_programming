#include "main.h"

/**
 * print_sign(int n) - return 1 if n > 0 return 0 if n = 0 and return -1 if n < 0.
 * @n: nember.
 * Return: Alwys 0.
*/
int print_sign(int n)
{
if (n > 0)
{
	if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return(-1);
	}

printf("+");
return (1);
}
return (0);
}
