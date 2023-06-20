#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @q: the number to print
 * Return: value of the last digit of number
 */
int print_last_digit(int q)
{
	int last;

	last = q % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
