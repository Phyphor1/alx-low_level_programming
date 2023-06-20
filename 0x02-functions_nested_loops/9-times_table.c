#include "main.h"

/**
 * times_table - print 9 times table, starting with 0
 * Return: empty output
 */
void times_table(void)
{
	int x, y, j, k, l;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	j = x * y;
	if (j > 9)
	{
	k = j % 10;
	l = (j - k) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(l + '0');
	_putchar(k + '0');
	}
	else
	{
	if (y != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(j + '0');
	}
	}
	_putchar('\n');
	}
}
