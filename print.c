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
	int i = 0;

	if (!format)
		return (-1);

	va_start(ap, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			length += _putchar(format[i]);
			i++;
		}

		else
		{
			if (format[i + 1] == '%')
			{
				length += _putchar('%');
				i++;
			}

			else if (get_format(format[i + 1]) != NULL)
			{
				length += get_format(format[i + 1])(ap);
				i++;
			}

			else
				length += _putchar(format[i]);

			i++;
		}
	}
	va_end(ap);

	return (length);
}
