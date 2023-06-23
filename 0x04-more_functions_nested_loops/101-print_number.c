#include "main.h"
/**
 * print_number -  print an integer
 * @n: parameter
 * Return: 0
 */
void print_number(int n)
{
	unsigned int r = n;

	if (n < 0)
	{
		_putchar(45);
		r = -r;
	}
	if (r / 10)
	{
		print_number(r / 10);
	}
	_putchar(r % 10 + '0');
}
