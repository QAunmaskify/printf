#ifndef MAIN_H
#define MAIN_H
#define fd 1

#include <limits.h>
#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * struct format - Struct format
 *
 * @specifier: format string
 * @f: The function associated
 */
typedef struct format
{
	char specifier;
	int (*f)(va_list);
} f_t;

int _printf(const char *, ...);
int (*get_format(char))(va_list);
int print_char(va_list);
int _putchar(char);
int print_str(va_list);
int print_int(va_list);

#endif
