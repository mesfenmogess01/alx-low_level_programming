#include "main.h"
/**
 * print_most_numbers - enter point
 *
 * Description: print number with _putchar
 *
 * Return: void
 */
void print_most_numbers(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
if (n == '2' || n == '4')
	;
else
	_putchar(n);
}
_putchar('\n');
}
