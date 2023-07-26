#include "main.h"
#include <unistd.h>

/**
 * _print_string - Prints a string to stdout.
 * @str: The string to print.
 * Return: The number of characters printed.
 */
int _print_string(char *str)
{
	int i;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}
