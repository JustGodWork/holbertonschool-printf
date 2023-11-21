#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

#define is_flag(c1, c2) (c1 == '%' && (c2 == 'c' || c2 == 's' || c2 == 'd'))

int _putchar(char c);
int _strlen(const char *s);
int char_add(char **buffer, char c, int *size);
int _printf(const char *format, ...);
int print_str(const char *str);
int parser(const char *buffer, va_list args);
int (*get_flag_handler(char c))(char **buffer, va_list args, int *size);

int parse_char(char **buffer, va_list args, int *size);

/**
 * struct flag_handler - struct for flag handler
 * @flag: flag to be checked
 * @call: pointer to flag handler
 */
typedef struct flag_handler
{
	char *flag;
	int (*call)(char **buffer, va_list args, int *size);
} flag_handler_s;

#endif
