#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char nbr = '0';

	while (nbr <= '9')
	{
	putchar(nbr);
	nbr++;
	}
	putchar('\n');

	return (0);
}
