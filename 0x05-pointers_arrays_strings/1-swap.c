#include "main.h"

/**
 * swap_int - takes two variables and swap
 * @a: swap and store b
 * @b: swap and store a
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
