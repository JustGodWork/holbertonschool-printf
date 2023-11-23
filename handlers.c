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
/**
 * parse_integer - converts an int variable to a string and print it
 * @args: list of arguments
 * @size: size of buffer
*/
void parse_integer(va_list args, int *size)
{
	int i = 0;
	int num;
	char *str;
	/* int_to_str - converts an int variable to a string
	 * @num: int variable to be converted
	 */
	char *int_to_str(int num)
	{
		char *result;
		int temp = num;
		int is_negative = (num < 0);
		int len = (num < 0) ? 2 : 1;

		slen = len;
		while (temp /= 10)
		{
			len++;
		}

		result = malloc(len + 1);
		if (result == NULL)
			return (NULL);
		if (is_negative)
		{
			result[0] = '-';
			num = -num;
		}
		result[len] = '\0';
		while (len > is_negative)
		{
			len--;
			result[len] = '0' + num % 10;
			num /= 10;
		}
		return (result);
	}
	num = va_arg(args, int);
	str = int_to_str(num);
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		(*size)++;
	}
}