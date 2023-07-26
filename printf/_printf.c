#include "main.h"
#include <unistd.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * _printf - Produces output according to a format.
 * @format: The format string containing directives.
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char buffer[BUFFER_SIZE];
	int buff_ind = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			buffer[buff_ind++] = *format;
			if (buff_ind == BUFFER_SIZE)
			{
				count += write(1, buffer, BUFFER_SIZE);
				buff_ind = 0;
			}
			count++;
		}
		else
		{
			format++; /* Move past the '%' character */

			if (*format == '\0')
				break;

			if (*format == '%') /* Double '%' case */
			{
				buffer[buff_ind++] = '%';
				if (buff_ind == BUFFER_SIZE)
				{
					count += write(1, buffer, BUFFER_SIZE);
					buff_ind = 0;
				}
				count++;
			}
			else
			{
				/* Handle custom conversion specifiers and other conversions */
				if (_handle_custom(format, args, buffer, &buff_ind))
				{
					/* Custom conversion specifier found, move format pointer */
					format++;
				}
				else
				{
					/* Handle normal conversion specifiers */
					buffer[buff_ind++] = '%';
					if (buff_ind == BUFFER_SIZE)
					{
						count += write(1, buffer, BUFFER_SIZE);
						buff_ind = 0;
					}
					count++;
				}
			}
		}
		format++;
	}

	count += write(1, buffer, buff_ind);
	va_end(args);

	return (count);
}
