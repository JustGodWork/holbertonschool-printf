#include "main.h"

/**
 * get_specifier_handler - get specifier handler
 * @specifier: specifier to be checked
 * Return: pointer to specifier handler
*/
void (*get_specifier_handler(const char specifier))(va_list args, int *size)
{
	/* Initializing variables */
	int i;
	specifier_handler_s specifier_handler[] = {
		{'c', parse_char},
		{'s', parse_string},
		{'%', parse_percent},
		{'d', parse_integer},
		{'i', parse_integer},
		{'\0', NULL}
	};

	/* Search for matching specifier handler */
	for (i = 0; specifier_handler[i].specifier != '\0'; i++)
	{
		/* in case of match return specifier handler */
		if (specifier_handler[i].specifier == specifier)
			/* return specifier handler */
			return (specifier_handler[i].call);
	}

	return (NULL);
}
