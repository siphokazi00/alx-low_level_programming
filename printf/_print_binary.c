#include "main.h"
#include <unistd.h>


/**
 * _print_binary - Prints a binary number to stdout.
 * @num: The binary number to print.
 * Return: The number of characters printed.
 */
int _print_binary(unsigned int num)
{
	int count = 0;
	int binary[32]; /* Assuming int is 32-bit */

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	for (int i = 0; i < 32; i++)
		binary[i] = 0;

	int i = 0;
	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j] + '0');
		count++;
	}

	return (count);
}
