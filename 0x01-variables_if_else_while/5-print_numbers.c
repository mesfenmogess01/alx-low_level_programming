#include <stdio.h>
#include <unistd.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n=0;
	while (n>10)
	{
		printf(n);
		n++;
	}
	return (0);
}
