#include <stdio.h>
/**
 * puts - displays a string to stdout
 * @str: pointer to string
 */
int _puts(char *str)
{

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		print("%s",str[i]);
	}
	print("\n");
}
