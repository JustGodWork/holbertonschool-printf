#include "main.h"

/**
 * handle_specifier - parse formatted string
 * @specifier: specifier to be handled
 * @buffer: buffer to be parsed
 * @args: list of arguments
 * @size: size of buffer
 * Return: (0) success (-1) fail
*/
int handle_specifier(char specifier, char **buffer, va_list args, int *size)
{
	int (*handler)(char **buffer, va_list args, int *size);

	if (specifier == '%')
		return (parse_percent(buffer, size));

	handler = get_specifier_handler(specifier);

	if (handler == NULL || handler(buffer, args, size) == -1)
		return (-1);

	return (0);
}

/**
 * parser - parse formatted string
 * @buffer: buffer to be parsed
 * @args: list of arguments
 * Return: size of buffer
*/
int parser(const char *buffer, va_list args)
{
	/* initializing variables  */
	char *str;
	int i = 0, size = 0;

	/* allocating memory for str */
	/* for now we will allocate only 1 byte for the \0 character*/
	str = malloc(sizeof(char) * 1);

	/* Return 0 if malloc fail */
	if (str == NULL)
		return (0);

	for (i = 0; buffer[i] != '\0'; i++)
	{
		if (is_specifier(buffer[i], buffer[i + 1]))
		{
			if (handle_specifier(buffer[i + 1], &str, args, &size) == -1)
			{
				free(str);
				return (0);
			}
			else
				i++;
		}
		else
			if (char_add(&str, buffer[i], &size) == -1)
			{
				free(str);
				return (0);
			}
	}

	/* adding null character to the end of the string */
	str[size] = '\0';

	/* print buffer to stdout */
	print_str(str);

	/* free memory */
	free(str);

	return (size);
}
