#include "main.h"

/**
 * parse_percent - parse character
 * @buffer: buffer to be parsed
 * @args: list of arguments
 * @size: size of buffer
 * Return: pointer to buffer
 */
int parse_percent(char **buffer, va_list args, int *size)
{
	/* DEBUG PRINT */
	printf("parse_char -> buffer = \"%s\"\n", *buffer);
	/* Add char to buffer */
	return (char_add(buffer, '%', size));
}
