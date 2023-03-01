#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 * Return: void
 */

void _putc(char *str)

{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
