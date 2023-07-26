#include "main.h"
#include <unistd.h>

/**
 * _print_integer - Prints an integer to stdout.
 * @num: The integer to print.
 * Return: The number of characters printed.
 */
int _print_integer(int num)
{
	unsigned int n;
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		n = -num;
	}
	else
		n = num;

	if (n / 10 != 0)
		count += _print_integer(n / 10);

	_putchar((n % 10) + '0');
	count++;

	return (count);
}
