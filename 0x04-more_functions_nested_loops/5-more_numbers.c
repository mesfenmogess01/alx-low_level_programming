#include "main.h"

/**
 * more_numbers - enter point
 *
 * Description: print the numbers in _putchar
 *
 * Return: void
 */
void more_numbers(void)
{
int n, tens, unit, row;

for (row = 1; row <= 10; row++)
{
for (n = 0; n <= 14; n++)
{
	tens = n / 10;
	units = n % 10;
	if (n > 9)
		_putchar(tens + '0');
	_putchar(units + '0');
}
_putchar('\n');
}
}
