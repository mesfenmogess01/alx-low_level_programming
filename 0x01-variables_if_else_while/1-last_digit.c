#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("%i Last digit of n is", n, "%i and is greater than 5\n");
	}
	else if (n == 0)
	{
		printf("%i Last digit of n is", n, "%i and is 0\n");
	else
	{
		printf("%i Last digit of n is", n, "%i and is less than 6 and not 0\n");
	}
	return (0);
}
