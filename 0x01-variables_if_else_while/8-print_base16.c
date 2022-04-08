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
char alphabet;
for (alphabet = 48; alphabet <= 58; alphabet++)
{
putchar(alphabet);
}
for (alphabet = 97; alphabet <= 102; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
