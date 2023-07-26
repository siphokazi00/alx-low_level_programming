#include "main.h"
#include <unistd.h>


/**
 * _print_hex - Prints a hexadecimal number to stdout.
 * @num: The hexadecimal number to print.
 * @uppercase: Flag to determine if the letters should be uppercase.
 * Return: The number of characters printed.
 */
int _print_hex(unsigned int num, int uppercase)
{
	int count = 0;
	char hex[100]; /* Assuming int is 32-bit */

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	for (int i = 0; i < 100; i++)
		hex[i] = 0;

	int i = 0;
	while (num > 0)
	{
		int rem = num % 16;
		if (rem < 10)
			hex[i] = rem + '0';
		else
			hex[i] = (uppercase ? 'A' : 'a') + (rem - 10);
		num /= 16;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
	{
		_putchar(hex[j]);
		count++;
	}

	return (count);
}
