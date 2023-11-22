#include "main.h"

/**
 * parse_char - parse character
 * @buffer: buffer to be parsed
 * @args: list of arguments
 * @size: size of buffer
 * Return: (0) success (-1) fail
 */
int parse_char(char **buffer, va_list args, int *size)
{
	/* Add char to buffer */
	return (char_add(buffer, va_arg(args, int), size));
}
