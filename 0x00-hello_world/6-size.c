#include <stdio.h>
/**
 * main - A program that the size of varoius types on the computer it is compiled
 * Return: 0 (Success)
 */
int main(void)
{
printf("size of a char: %d byte(s)\n", sizeof(char));
printf("size of a int: %d byte(s)\n", sizeof(int));
printf("size of a long int: %d byte(s)\n", sizeof(long int));
printf("size of a long long int: %ld byte(s)\n", sizeof(long long int));
printf("size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
