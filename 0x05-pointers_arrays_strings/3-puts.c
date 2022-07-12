#include <stdio.h>
/**
 * puts - displays a string to stdout
 * @str: pointer to string
 */
void _puts(char *str)
{

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
}
