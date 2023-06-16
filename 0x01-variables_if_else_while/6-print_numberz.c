#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int q;

	for (q = 0; q < 10; q++)
		putchar((q % 10) + '0');

	putchar('\n');
	return (0);
}
