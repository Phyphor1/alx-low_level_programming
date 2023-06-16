#include <stdio.h>
/**
 * main - Print all numbers of base 16 in lowercase.
 * Return: Always 0 (success)
 */
int main(void)
{
	int m;

	char n;

	for (m = 0; m < 10; m++)
		putchar((m % 10) + '0');
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
