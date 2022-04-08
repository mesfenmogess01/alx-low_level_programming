#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char lowerAlphabet;
	for (lowerAlphabet = 'a'; lowerAlphabet <= 'z'; lowerAlphabet++)
	{
		putchar(lowerAlphabet);
	}
	putchar('\n');
	return (0);
}
