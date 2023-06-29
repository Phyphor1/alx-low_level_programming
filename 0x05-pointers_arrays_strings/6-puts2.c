#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string used for reference
 * Return: 0
 */

void puts2(char *str)
{
	int q = 0;

	while (str[q] != '\0')
	{
		if (q % 2 == 0)
		{
			_putchar(str[q]);
		}
		q++;
	}
	_putchar('\n');
}
