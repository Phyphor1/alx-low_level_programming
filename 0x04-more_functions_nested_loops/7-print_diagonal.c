#include "main.h"

/**
 * print_diagonal - to draw diagonal
 * @n: parameter used
 * Return: void
 */

void print_diagonal(int n)
{
	int d, g;

	if (n <= 0)
		_putchar('\n');
	for (d = 0; d < n; d++)
	{
		for (g = 0; g < d; g++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
