#include "main.h"

/**
 * parse_percent - parse character
 * @buffer: buffer to be parsed
 * @size: size of buffer
 * Return: (0) success (-1) fail
 */
int parse_percent(char **buffer, int *size)
{
	/* Add char to buffer */
	return (char_add(buffer, '%', size));
}
