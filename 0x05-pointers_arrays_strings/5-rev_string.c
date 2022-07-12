#include <stdio.h>
/**
 * rev_string - prints a string in reverse order
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i;

	for (i = 0; i < sizeof(s); i++)
	{
		printf("%s",s[i - 1]);
	}
	printf("\n");
}
