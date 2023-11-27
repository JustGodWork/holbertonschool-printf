#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: 1 on success, -1 on error
*/
int _putchar(char c)
{
	/* write returns char len (1) on success and -1 on error */
	return (write(1, &c, 1));
}
