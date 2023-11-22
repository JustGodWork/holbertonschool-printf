#include "main.h"

/**
 * _printf - prints string to stdout with format
 * @format: list of argument types passed to the function
 * Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	/* if format is NULL */
	/* We don't need to handle all operations on it. */
	if (format == NULL)
		return (0);

	/* if format as no entry */
	/* We don't need to handle all operations on it. */
	if (format[0] == '\0')
		return (0);

	/* initialize args to store all values after format */
	va_start(args, format);

	/* parse format and store all values in args */
	parser(&count, format, args);

	/* free memory allocated for args */
	va_end(args);

	return (count);
}
