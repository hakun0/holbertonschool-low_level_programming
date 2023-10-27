/**
 * swap_int - function
 * @a: int ptr
 * @b: int ptr
 */

void swap_int(int *a, int *b)
{

	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
