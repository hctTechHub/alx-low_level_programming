#include <stdio.h>
/**
 * rev_string - prints a string in reverse order
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i,len;
	
	len = sizeof(s)/sizeof(char);
	for ( i  = 0; i < len; i++)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
