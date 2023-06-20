#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @k: The number to be compiled
 * Return: Absolute value of number or zero
 */
int _abs(int k)
{
	if (k < 0)
	{
	int abs_val;

	abs_val = k * -1;
	return (abs_val);
	}
	return (k);
}
