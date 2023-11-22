#include "main.h"

/**
 * parser - parse formatted string
 * @buffer: buffer to be parsed
 * @args: list of arguments
*/
int parser(const char *buffer, va_list args)
{
	/* initializing variables  */
	char *str;
	int i = 0, size = 0;
	int (*handler)(char **buffer, va_list args, int *size);

	/* allocating memory for str */
	/* for now we will allocate only 1 byte for the \0 character*/
	str = malloc(sizeof(char) * 1);

	/* Return 0 if malloc fail */
	if (str == NULL)
		return (0);

	/* DEBUG PRINT */
	printf("parser -> buffer = \"%s\"\n", buffer);

	for (i = 0; buffer[i] != '\0'; i++)
	{
		/* DEBUG PRINT */
		printf(
			"parser -> Is flag(%c, %c) = %s\n",
			buffer[i], buffer[i + 1],
			is_flag(buffer[i], buffer[i + 1]) == 1 ? "true" : "false"
		);

		if (is_flag(buffer[i], buffer[i + 1]))
		{
			handler = get_flag_handler(buffer[i + 1]);
			if (handler == NULL || handler(&str, args, &size) == -1)
			{
				free(str);
				return (0);
			}
			else
				i++;
		}
		else
			if (char_add(&str, buffer[i], &size) == -1)
			{
				free(str);
				return (0);
			}

		/* DEBUG PRINT */
		printf("parser -> buffer[%d] = %c\n", i, buffer[i]);
		printf("parser -> str[%d] = %c\n", size, str[size]);
	}

	/* adding null character to the end of the string */
	str[size + 1] = '\0';

	/* DEBUG PRINT */
	printf("parser -> str[%d] = %c\n", size + 1, str[size + 1]);
	printf("parser -> size = %d, str = \"%s\"\n", size, str);
	printf("parser -> [STDOUT] -> \"%s\"\n", str);

	/* print buffer to stdout */
	print_str(str);

	/* free memory */
	free(str);

	return (size);
}
