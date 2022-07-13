#include <stdio.h>
/**
 * print_array -  prints elements of array
 * @a: array
 * @n: elements of array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i, ", a[i]);
	}
}
