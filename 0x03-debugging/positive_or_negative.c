#include "main.h"
/**
 * main - check if a number is positive, negative or zero
 * 0: is the number to be checked
 * Return: 0 on success
 */
void positive_or_negative(int k)
{
if (k < 0)
{
	printf("%d is %s\n", k, "negative");
}
else if (k > 0)
{
	printf("%d is %s\n", k, "positive");
}
else
{
	printf("%d is %s\n", k, "zero");
}
return;
}
