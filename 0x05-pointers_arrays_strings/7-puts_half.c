#include <stdio.h>
#include "2-strlen.c"
/**
 * puts_half - prints half string
 * @str: string to print
 */
void puts_half(char *str)
{
	int i, len, halfLen, n;
	
	len = _strlen(str);
	halfLen = len / 2;
	n = (len - 1) / 2;
	if (len % 2 == 0)
	{
		for (i = halfLen; i < len; i++)
		{
			printf("%c", str[i]);
		}
	}
	else
	{
		for (i = n + 2; i < len; i++)
		{
			printf("%c", str[i]);
		}
	}
      	printf("\n");
}
