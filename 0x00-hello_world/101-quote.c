#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora korpar, 2015-10-19\n", sizeof("and that piece of art isuseful\" - dora korpar, 2015-10-19"));
return (1);
}