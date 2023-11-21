#include "main.h"

/**
 * get_flag_handler - get flag handler
 * @c: flag to be checked
 * Return: pointer to flag handler
 */
int (*get_flag_handler(char c))(char **buffer, va_list args, int *size)
{
	int i;
	flag_handler_s flag_handler[] = {
		{"c", parse_char},
		/* {'s', parse_string}, */
		/* {'d', parse_int}, */
		/* {'i', parse_number}, */
		{NULL, NULL}
	};

	/* Search for matching flag handler */
	for (i = 0; flag_handler[i].flag != NULL; i++)
	{
		/* in case of match return flag handler */
		if (flag_handler[i].flag[0] == c)
			return (flag_handler[i].call);
	}

	return (NULL);
}
