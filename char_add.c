#include "main.h"

/**
 * char_add - add char to buffer
 * @buffer: buffer to be added
 * @c: char to be added
 * @size: size of buffer
 * Return: (0) success (-1) fail
*/
int char_add(char **buffer, char c, int *size)
{
	/* DEBUG PRINTS */
	printf("char_add -> buffer: %s\n", *buffer);
	printf("char_add -> len: %d\n", *size);
	printf("char_add -> c: %c\n", c);

	*buffer = realloc(*buffer, sizeof(char) * (*size + 1));

	/* Return -1 if realloc fail */
	if (*buffer == NULL)
		return (-1);

	(*buffer)[*size] = c;
	(*size)++;

	/* DEBUG PRINT */
	printf("char_add -> buffer: %s\n", *buffer);

	return (0);
}
