#include "main.h"

/**
 * parse_char - parse character
 * @buffer: buffer to be parsed
 * @args: list of arguments
 * @size: size of buffer
 * Return: pointer to buffer
 */
int parse_char(char **buffer, va_list args, int *size)
{
	/* DEBUG PRINT */
	printf("parse_char -> buffer = \"%s\"\n", *buffer);
	/* Add char to buffer */
	return char_add(buffer, (char)va_arg(args, int), size);
}
