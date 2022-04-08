#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char lower_alphabet;
	char upper_alphabet;
	for (lower_alphabet = 'a'; lower_alphabet <= 'z'; lower_alphabet++)
	{
		putchar(lower_alphabet);
	}
	for (upper_alphabet = 'A'; upper_alphabet <= 'Z'; upper_alphabet++)
	{
		putchar(upper_alphabet);
	}
	putchar('\n');
	return (0);
}
