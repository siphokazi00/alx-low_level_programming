#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - Produces output according to a format.
 * @format: The format string containing directives.
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{va_list args;
	int count = 0;
	char c, *s;

	a_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					c = va_arg(args, int);
					count += putchar(c);
					break;
				case 's':
					s = va_arg(args, char *);
					if (s == NULL)
						count += printf("(null)");
					else
						count += printf("%s", s);
					break;
				case '%':
					count += putchar('%');
					break;
				default:
					count += putchar('%');
					count += putchar(*format);
					break;
			}
		}
		else
		{
			count += putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
