#include "main.h"

/**
 * print_int - prints the integer character
 * @arg: passed in argument
 *
 * Return: number of printed digits
 */
int print_int(va_list arg)
{
	int number = va_arg(arg, int);
	int tmp = number;
	int value = 1;
	int nbyte = 0;

	if (number < 0)
	{
		nbyte += _putchar(45);
		number = -1 * number;

		tmp = number;
	}

	while (number > 9)
	{
		number /= 10;
		value *= 10;
	}

	while (value >= 1)
	{
		nbyte += _putchar((tmp / value) % 10 + '0');
		value /= 10;
	}

	if (nbyte)
		return (nbyte);

	return (0);
}
