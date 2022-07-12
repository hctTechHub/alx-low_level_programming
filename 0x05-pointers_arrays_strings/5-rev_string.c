#include <stdio.h>
/**
 * rev_string - prints a string in reverse order
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	while (i > 0)
	{
		printf("%c", s[i - 1]);
		i--;
	}
	printf("\n");
}
