#include "main.h"

/**
 * print_square - to print square
 * @size: parameter used
 * Return: void
 */
void print_square(int size)
{
int d, g;

if (size <= 0)
	_putchar('\n');

for (d = 0; d < size; d++)
{
for (g = 0; g < (size); g++)
{
	_putchar('#');
}
	_putchar('\n');
}
}
