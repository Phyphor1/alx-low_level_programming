#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: pointer string
 * Return: 0
 */

void rev_string(char *s)
{
	int length, f, half;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
	;
	f = 0;
	half = length / 2;

	while (half--)
	{
		temp = s[length - f - 1];
		s[length - f - 1] = s[f];
		s[f] = temp;
		f++;
	}
}
