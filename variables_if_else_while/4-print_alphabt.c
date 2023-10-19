#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char letter = 'A';

	while (letter <= 'Z')
	{
	putchar(letter);
	letter++;
	}
	if (letter != 'e' && letter != 'q')
	putchar('\n');
	return (0);
}
