#include <stdio.h>
#include <unistd.h>

/**
 * *  * main - Entry point
 * *   *
 * *    * Return: Always 0 (Success)
 * */
int main(void)
{
	char lower_case_alphabet;
	for (lower_case_alphabet = 'a'; lower_case_alphabet <= 'z'; lower_case_alphabet++)
	{
		putchar(lower_case_alphabet);
	}
	putchar('\n');
	return (0);
}
