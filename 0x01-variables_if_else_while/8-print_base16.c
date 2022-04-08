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
int number;
char alphabet;
for (number = 48; number <= 58; number++)
{
puchar(number);
}
for (alphabet = 97; alphabet <= 102; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
