#include "main.h"
#include <unistd.h>

/**
 * _print_octal - Prints an octal number to stdout.
 * @num: The octal number to print.
 * Return: The number of characters printed.
 */
int _print_octal(unsigned int num)
{
	int count = 0;
	int octal[100]; /* Assuming int is 32-bit */

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	for (int i = 0; i < 100; i++)
		octal[i] = 0;

	int i = 0;
	while (num > 0)
	{
		octal[i] = num % 8;
		num /= 8;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
	{
		_putchar(octal[j] + '0');
		count++;
	}

	return (count);
}
