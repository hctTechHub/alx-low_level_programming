#include <stdio.h>
#include <string.h>
/**
 * _strlen - returns length of string
 * @s: character that points to string
 */
int _strlen(char *s)
{
	char str;

	str = *s;
	int len = strlen(str);
	return (len);
}
