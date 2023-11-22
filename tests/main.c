#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{

	int lenD1, lenC1, lenD2, lenC2, lenD3, lenC3, lenD4, lenC4, lenD5, lenC5;

	printf("-----------------\n");

	lenD1 = printf("Let's try to printf a simple sentence.\n");
	lenC1 = _printf("Let's try to printf a simple sentence.\n");

	printf("-----------------\n");

	/* Replacing %c by 'l' */
	lenD2 = printf("Hel%co\n", 'l');
	lenC2 = _printf("Hel%co\n", 'l');

	printf("-----------------\n");

	/* Replacing %s by "World" */
	lenD3 = printf("Hello %s\n", "World");
	lenC3 = _printf("Hello %s\n", "World");

	printf("-----------------\n");

	/* Replacing %s by "(null)" */
	lenD4 = printf("Hello %s\n", NULL);
	lenC4 = _printf("Hello %s\n", NULL);

	printf("-----------------\n");

	/* Replacing %% by % */
	lenD5 = printf("Hello %%\n");
	lenC5 = _printf("Hello %%\n");

	printf("-----------------\n\n");

	printf("Lengths:\n");

	printf("(Default[1]: %d, Custom[1]: %d)\n", lenD1, lenC1);
	printf("(Default[2]: %d, Custom[2]: %d)\n", lenD2, lenC2);
	printf("(Default[3]: %d, Custom[3]: %d)\n", lenD3, lenC3);
	printf("(Default[4]: %d, Custom[4]: %d)\n", lenD4, lenC4);
	printf("(Default[5]: %d, Custom[5]: %d)\n", lenD5, lenC5);

	return (0);
}
