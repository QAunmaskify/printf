#include "main.h"

/**
 * character - prints single character
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
 * string - prints array of characters
 * @str - parameter to print
 *
 * Return: number of printed character
 */
