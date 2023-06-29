#include "main.h"
/**
 * _strncpy - function that copy string.
 * @dest: destination pointer
 * @src: source pointer
 * @n: byte used.
 * Return: pointer to destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && src[count] != '\0'; count++)
	dest[count] = src[count];

	for (; count < n; count++)
	dest[count] = '\0';

	return (dest);
}
