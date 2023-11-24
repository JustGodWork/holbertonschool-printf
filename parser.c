#include "main.h"

/**
 * is_specifier - check if character is a specifier
 * @c: character to be checked
 * @next: next character
 * Return: 1 if true, 0 if false
*/
int is_specifier(char c, char next)
{
	/* initializing variables */
	int i;
	char initializer = '%';
	/* Adjustable specifiers list */
	char *specifiers = "csdi%";

	/* loop through specifiers */
	for (i = 0; specifiers[i] != '\0'; i++)
	{
		/* if character is a specifier */
		if (c == initializer && next == specifiers[i])
			return (1);
	}

	return (0);
}

/**
 * parser - parse formatted string
 * @count: number of characters printed
 * @buffer: buffer to be parsed
 * @args: list of arguments
*/
void parser(int *count, const char *buffer, va_list args)
{
	/* initializing variables  */
	int i = 0;
	void (*handler)(va_list args, int *count);

	/* loop through buffer */
	for (i = 0; buffer[i] != '\0'; i++)
	{
		/* if % and char specifier found */
		if (is_specifier(buffer[i], buffer[i + 1]))
		{
			/* get handler for specifier */
			handler = get_specifier_handler(buffer[i + 1]);

			if (handler != NULL) /* if handler is found */
			{
				handler(args, count);
				/* increment i to skip % and specifier */
				i++;
			}
			else /* if handler is not found */
			{
				/* print % if no handler is found */
				_putchar(buffer[i]);
				/* print specifier if no handler is found */
				_putchar(buffer[i + 1]);
				/* increment count by 2 */
				(*count) += 2;
			}
		}
		else
		{
			/* print character */
			_putchar(buffer[i]);
			/* increment count by 1 */
			(*count)++;
		}
	}
}
