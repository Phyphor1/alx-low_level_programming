#include "main.h"

/**
 * print_numbers - to print numbers 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	char k;

	for (k = '0'; k <= '9'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
