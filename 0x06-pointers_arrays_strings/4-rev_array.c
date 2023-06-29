#include "main.h"
/**
 * reverse_array - funtion that reverses array if integer.
 * @a: pointer of array
 * @n: number of elementsof array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int m, c;

	n = n - 1;
	c = 0;
	while (c <= n)
	{
		m = a[c];
		a[c++] = a[n];
		a[n--] = m;
	}
}
