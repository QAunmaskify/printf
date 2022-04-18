#include "main.h"

/**
 * print_c - prints single character
 * @c: parameter to print
 *
 * Return: number of printed character
 */
int print_c(va_list c)
{
	char letter = va_arg(c, int);

	int nbyte = write(fd, &letter, sizeof(char));

	if (nbyte)
		return (1);

	return (0);
}


/**
 * print_str - prints array of characters
 * @s: parameter to print
 *
 * Return: number of printed character
 */
int print_str(va_list s)
{
	int nbyte, strlent;
	char *str = va_arg(s, char *);

	strlent = strlen(str);
	nbyte = write(fd, str, strlent);

	if (nbyte)
		return (strlent);

	return (0);
}
