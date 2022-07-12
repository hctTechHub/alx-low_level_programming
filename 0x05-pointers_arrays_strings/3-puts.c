#include <stdio.h>
/**
 * puts - displays a string to stdout
 * @str: pointer to string
 */
int _puts(char *str)
{

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		printf("%s",str[i]);
	}
	printf("\n");
}
