#include <stdio.h>

/**
 * print_array - function
 * @a: int ptr
 * @n: int
 */
void	print_array(int *a, int n)
{
	int	i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if ((i + 1) < n)
			printf(", ");
	}
	printf("\n");
}
