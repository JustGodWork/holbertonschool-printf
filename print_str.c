#include "main.h"
/**
 *  print_str - print all in string format
 *  @str: the string to print
 *  Return: (0) or (-1) if fail
 */
int print_str(const char *str)
{
	int len = _strlen(str);
	int bytes = write(1, str, len);

	if (bytes == -1)
		return (-1);

	return (0);
}
