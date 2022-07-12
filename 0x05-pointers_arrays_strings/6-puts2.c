#include <stdio.h>
/**
 * puts2 - prints string starting with first character
 * @str: str to print
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
		{
			printf("%c", str[i]);
		}
	}
	print("\n");
}
