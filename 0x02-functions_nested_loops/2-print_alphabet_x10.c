#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char pa;

	int k;

	k = 0;

	while (k < 10)
	{
	for (pa = 'a'; pa <= 'z'; pa++)
	{
	_putchar(pa);
	}
	_putchar('\n');
	k++;
	}
}
