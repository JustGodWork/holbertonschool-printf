#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{

	/* Replacing %c by 'l' */
	_printf("Hel%co\n", 'l');
	/* Replacing %s by "World" */
	_printf("Hello %s\n", "World");
	/* Replacing %s by "(null)" */
	_printf("Hello %s\n", NULL);
	/* Replacing %% by % */
	_printf("Hello %%\n");

	return (0);
}
