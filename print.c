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

	if (!format)
		return (-1);

	va_start(ap, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == '%')
			{
				_putchar('%');
				length++;
			}

			else if (*format == '\0')
				return (-1);

			else if (get_format(*format) != NULL)
				length += get_format(*format)(ap);

			else
			{
				_putchar(*format);
				length++;
			}

			format++;
		}

		else
		{
			_putchar(*format);
			format++;

			length++;
		}
	}
	va_end(ap);

	return (length);
}
