#include "main.h"

/**
 * parse_string - parse string
 * @buffer: buffer to be parsed
 * @args: list of arguments
 * @size: size of the string
 * Return: 0 on success and -1 on fail
*/
int parse_string(char **buffer, va_list args, int *size)
{
	char *str = va_arg(args, char *);
	int len = _strlen(str), i;

	*buffer = realloc(*buffer, *size + len + 1);

	if (buffer == NULL)
		return (-1);

	for (i = 0; i < len; i++)
		(*buffer)[*size + i] = str[i];

	(*size) += len;

	return (0);
}
