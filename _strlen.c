/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
