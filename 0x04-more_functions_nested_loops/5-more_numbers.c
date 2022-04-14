#include "main.h"
/**
 * more_numbers - enter point
 *
 * Return: void
 */

void more_numbers(void)
{
int i, tens, units, row;
for (row = 1; row <= 10; row++)
{
for (i = 0; i <= 14; i++)
{
tens = i / 10;
unit = i % 10;
if (i > 9)
{
_putchar(tens + '0');
}
_putchar(unit + '0');
}
_putchar('\n');
}
}
