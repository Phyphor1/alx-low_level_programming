#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: value less than 0
 */
int _strcmp(char *s1, char *s2)
{
	int x, y;

	x = 0;
	while (s1[x] == s2[x] && s1[x] != '\0')
	{
		x++;
	}
	y = s1[x] - s2[x];
	return (y);
}
