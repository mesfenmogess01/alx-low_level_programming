#include "main.h"

/**
 * swap_int - swaps two integer
 * @a: first integer
 * @b: second integer
 *
 * Return: Alweys 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
