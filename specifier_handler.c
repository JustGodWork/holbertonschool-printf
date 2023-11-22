#include "main.h"

/**
 * get_specifier_handler - get specifier handler
 * @c: specifier to be checked
 * Return: pointer to specifier handler
 */
int (*get_specifier_handler(char c))(char **buffer, va_list args, int *size)
{
	int i;
	specifier_handler_s specifier_handler[] = {
		{"c", parse_char},
		{"s", parse_string},
		{NULL, NULL}
	};

	/* Search for matching specifier handler */
	for (i = 0; specifier_handler[i].specifier != NULL; i++)
	{
		/* in case of match return specifier handler */
		if (specifier_handler[i].specifier[0] == c)
			return (specifier_handler[i].call);
	}

	return (NULL);
}
