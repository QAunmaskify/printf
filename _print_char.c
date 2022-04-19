#include "main.h"

/**
 * print_char - prints single character
 * @arg: parameter to print
 *
 * Return: number of printed character
 */
int print_char(va_list arg)
{
	int nbyte = _putchar(va_arg(arg, int));

	if (nbyte)
		return (nbyte);

	return (0);
}
