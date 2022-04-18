#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a character string
 * ...: variable arguments of variable type
 *
 * Return: int number of character(s).
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int length = 0;

	va_start(ap, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'c')
				length += get_format(*format)(ap);

			format++;
		}

		else
		{
			write(1, format, 1);
			format++;

			length++;
		}
	}

	va_end(ap);

	return (length);
}
