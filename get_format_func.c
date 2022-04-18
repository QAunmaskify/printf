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
		{'c', print_c},
		{'s', print_str},
		{'%', percent},
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
