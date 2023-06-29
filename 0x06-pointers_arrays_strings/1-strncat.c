#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number to be concatenated.
 * Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, x;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (x = 0; x < n && src[x] != '\0'; x++, length++)
	{
		dest[length] = src[x];
	}
	dest[length] = '\0';
	return (dest);
}
