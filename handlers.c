#include "main.h"

/**
 * parse_char - parse character
 * @args: list of arguments
 * @size: size of buffer
*/
void parse_char(va_list args, int *size)
{
	/* Initializing variables */
	char c;

	/* Get char from va_list */
	c = va_arg(args, int);

	/* Add char to buffer */
	_putchar(c);
	/* Increment size by 1 */
	(*size)++;
}

/**
 * parse_string - parse string
 * @args: list of arguments
 * @size: size of the string
*/
void parse_string(va_list args, int *size)
{
	/* Initializing variables */
	int i;
	char *str;

	/* Get string from va_list */
	str = va_arg(args, char *);

	/* If string is NULL, print (null) */
	if (str == NULL)
		str = "(null)";

	/* Loop through string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Add char to buffer */
		_putchar(str[i]);
		/* Increment size by 1 */
		(*size)++;
	}
}

/**
 * parse_percent - parse character
 * @args: list of arguments
 * @size: size of buffer
*/
void parse_percent(va_list args, int *size)
{
	/* Mark args as unused */
	(void)args;
	/* Add char to buffer */
	_putchar('%');
	/* Increment size by 1 */
	(*size)++;
}
