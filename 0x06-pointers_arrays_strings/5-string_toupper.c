#include "main.h"
/**
 * string_toupper - function that changes lowercase to uppercase
 * @x: pointer to string
 * Return: to uppercase string
 */
char *string_toupper(char *x)
{
	int z;

	z = 0;

	while (x[z] != '\0')
	{
		if (x[z] >= 97 && x[z] <= 122)
		{
			x[z] = x[z] - 32;
		}
		z++;
	}
	return (x);
}
