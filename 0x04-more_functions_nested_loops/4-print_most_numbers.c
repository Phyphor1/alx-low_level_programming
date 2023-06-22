#include "main.h"

/**
 * print_most_numbers - to print numbers from 0 to 9
 * Return: 0
 */

void print_most_numbers(void)
{
	char p;

	for (p = '0'; p <= '9'; p++)
	{
	if (!(p == '2' || p == '4'))
		_putchar(p);
	}
	_putchar('\n');
}
