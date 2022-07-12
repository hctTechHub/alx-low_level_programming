#include <stdio.h>
#include <string.h>
/**
 * _strlen - returns length of string
 * @s: character that points to string
 */
int _strlen(char *s)
{	
	char str[];
	int len;

	for(int i = 0; i < sizeof(s); i++)
	{
		str[i] = s[i];
	}
	len = sizeof(str);
	return (len);
}
