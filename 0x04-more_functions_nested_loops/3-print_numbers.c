#include "main.h"

/**
 * print_numbers - enter number
 *
 * Description: print the number with _putchar
 *
 * Return: void
 */
void print_numbers(void)
{
int number;
for (number = '0'; number <= '9'; number++)
{
_putchar(number);
}
_putchar('\n');
}
