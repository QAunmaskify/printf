#include "main.h"

/**
 * print_c - prints single character
 * @c: parameter to print
 *
 * Return: number of printed character
 */
int print_c(va_list c)
{

	int nbyte = _putchar(va_arg(c, int));


	return (nbyte);
}


/**
 * print_str - prints array of characters
 * @s: parameter to print
 *
 * Return: number of printed character
 */
int print_str(va_list s)
{
	int nbyte = 0;
	char *str = va_arg(s, char *);

	if (str != NULL)
	{
		while (*str)
		{
			nbyte += _putchar(*str);
			str++;

		}

	}
	else
	{
		write(fd, "(nil)", 5);
		nbyte = 5;
	}


	return (nbyte);
}
