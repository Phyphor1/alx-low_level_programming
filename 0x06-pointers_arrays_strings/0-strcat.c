#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: destination string pointer
 * @src: source string pointer.
 * Return: to destination string.
 */

char *_strcat(char *dest, char *src)
{
	int length, v;

	length = 0;
	while (dest[length] != '\0')
	{
	length++;
	}
	for (v = 0; src[v] != '\0'; v++, length++)
	{
	dest[length] = src[v];
	}
	dest[length] = '\0';
	return (dest);
}
