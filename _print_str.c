#include "main.h"

/**
 * print_str - prints array of characters
 * @arg: parameter to print
 *
 * Return: number of printed character
 */
int print_str(va_list arg)
{
	char *str = va_arg(arg, char *);
	int nbyte = 0;

	if (str == NULL)
		str = "(NULL)";

	while (*str)
	{
		nbyte += _putchar(*str);
		str++;
	}

	if (nbyte)
		return (nbyte);

	return (0);
}
