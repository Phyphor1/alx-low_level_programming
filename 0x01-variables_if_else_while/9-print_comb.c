#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int h = '0';

	while (h <= '9')
	{
		putchar(h);
		if (h != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++h;
	}
	putchar('\n');
	return (0);
}
