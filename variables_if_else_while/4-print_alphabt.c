#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}
	if (letter != 'e' && letter != 'q')
	putchar('\n');
	return (0);
}
