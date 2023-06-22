#include "main.h"

/**
 * print_line - to draw a straight line
 * @n: no of times
 * Return: 0
 */

void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
