#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	unsigned long int k, p = 612852475143;

	for (k = 3; k < 782849; k = k + 2)
	{
		while ((p % k == 0) && (p != k))
			p = p / k;
	}
	printf("%lu\n", p);
	return (0);
}
