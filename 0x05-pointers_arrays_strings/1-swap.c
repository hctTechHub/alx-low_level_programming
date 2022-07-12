/*
 * swap_int - swaps two integers value
 * @a: pointer that points to integer
 * @b: pointer that points to integer
 * @c: pointer that points to param a
 * @d: pointer that points to param b
 */
void swap_int(int *a, int *b)
{
	int c,d;
        c = * a;
        d = *b;
	*a = d;
	*b = c;
}
