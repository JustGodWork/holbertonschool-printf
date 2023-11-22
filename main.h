#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

#define is_specifier(c1, c2) (c1 == '%' && (c2 == 'c' || c2 == 's' || c2 == '%'))

int _strlen(const char *s);
int char_add(char **buffer, char c, int *size);
int _printf(const char *format, ...);
int print_str(const char *str);
int parser(const char *buffer, va_list args);
int (*get_specifier_handler(char c))(char **buffer, va_list args, int *size);

int parse_char(char **buffer, va_list args, int *size);
int parse_string(char **buffer, va_list args, int *size);
int parse_percent(char **buffer, int *size);

/**
 * struct specifier_handler - struct for specifier handler
 * @specifier: specifier to be checked
 * @call: pointer to specifier handler
 */
typedef struct specifier_handler
{
	char *specifier;
	int (*call)(char **buffer, va_list args, int *size);
} specifier_handler_s;

#endif
