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
int i;
int first_number;
int second_number;
int result;
i = 0;
result = 0;
while (i < 10)
{
if (result < 10)
{
second_number = result;
}
else
{
firstt_number = result / 10;
second_number = result % 10;
}
_putchar(second_number + '0');

result++;
}
i++;
result = 0;
_putchar('\n');
}
}
