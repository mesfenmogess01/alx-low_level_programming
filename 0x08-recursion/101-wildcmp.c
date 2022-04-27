#include "main.h"
/**
 * wildcmp - compares two string and returns
 * @s1: number one
 * @s2: number two
 *
 * Return: flag
 */
void wildcmp(char* s1, char* s2)
{
int flag = 0;
while (*s1 != '\0' || *s2 != '\0') {
if (*s1 == *s2) {
s1++;
s2++;
}
else if ((*s1 == '\0' && *s2 != '\0') || (*s1 != '\0' && *s2 == '\0') || *s1 != *s2) {
	flag = 1;
	break;
}
}
return flag;
}
/**
 * main - main
 *
 * Return: 0
 */

int main(void)
{
	char str1[str_size], str2[str_size];
	int flg=0;
	fgets(str1, sizeof str1, stdin);
	fgets(str2, sizeof str2, stdin);          
	printf("\nString1: %s", str1);
	printf("String2: %s", str2);
	flg = test(str1, str2);
	if(flg == 0)
	{
printf("\nStrings are equal.\n");

else if(flg == 1)
{
printf("\nStrings are not equal.");
}
return 0;
}
