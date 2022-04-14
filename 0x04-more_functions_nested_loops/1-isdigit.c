#include "main.h"
#include <stdio.h>

/**
 * _isdigit - enter point
 *@c: digit 0 to 9 number
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
