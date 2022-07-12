/**
 * swap_int - swaps integers
 * @a: pointer that points to integer
 * @b: pointer that points to integer
 */
void swap_int(int *a, int *b)
{
	int c, d;
	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
