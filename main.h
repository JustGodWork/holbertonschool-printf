#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct specifier_handler - struct for specifier handler
 * @specifier: specifier to be checked
 * @call: pointer to specifier handler
*/
typedef struct specifier_handler
{
	char specifier;
	void (*call)(va_list args, int *size);
} specifier_handler_s;

int _putchar(char c);
int _printf(const char *format, ...);
void parse_char(va_list args, int *size);
void parse_string(va_list args, int *size);
void parse_integer(va_list args, int *size);
void parse_percent(va_list args, int *size);
void parser(int *count, const char *buffer, va_list args);
void (*get_specifier_handler(const char specifier))(va_list args, int *size);

#endif
