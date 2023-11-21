#include "main.h"

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	/* if format as no entry */
	/* We don't need to handle all operations on it. */
	if (_strlen(format) <= 0)
		return (0);

	/* initialize args to store all values after format */
	va_start(args, format);

	/* todo: call parser to parse format and print args */
	/* count = parser(format, args); */

	/* free memory allocated for args */
	va_end(args);

	return (count);
}
