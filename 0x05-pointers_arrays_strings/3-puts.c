/**
 * puts - displays a string to stdout
 * @str: pointer to string
 */
int _puts(char *str)
{

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{}
	j = i;
	char txt[j];
	for (i = 0; str[i] != '\0'; i++)
	{
		txt[i] = str[i];
		print("%s",txt[i]);
	}
	print("\n");
}
