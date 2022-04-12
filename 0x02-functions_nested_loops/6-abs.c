#include "main.h"
#include <stdio.h>

/** 
 * _abs - absolute value of integer
 * @n: any integer number
 * Return: Alwyes 0
*/
int _abs(int n)
{
if (n > 0)
{
_putchar("&d", n);
}
else if (n == 0)
{
_putchar("&d", n);
}
else
{
_putchar("&d", (n*(-1));
}
return (0);
}
