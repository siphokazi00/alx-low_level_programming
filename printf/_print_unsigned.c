#include "main.h"
#include <unistd.h>

/**
 * _print_unsigned - Prints an unsigned integer to stdout.
 * @num: The unsigned integer to print.
 * Return: The number of characters printed.
 */
int _print_unsigned(unsigned int num)
{
	int count = 0;

	if (num / 10 != 0)
		count += _print_unsigned(num / 10);

	_putchar((num % 10) + '0');
	count++;

	return (count);
}
