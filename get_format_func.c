#include "main.h"

/**
 * get_format - select a particular specifier
 * @y: character to compare
 *
 * Return: function pointer
 */
int (*get_format(char y))(va_list)
{
	f_t format[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};

	int i = 0;

	while (format[i].specifier)
	{
		if (y == format[i].specifier)
			return (format[i].f);

		i++;
	}

	return (NULL);
}
