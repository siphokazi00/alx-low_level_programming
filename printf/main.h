#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _print_string(char *str);
int _print_integer(int num);
int _print_binary(unsigned int num);
int _print_unsigned(unsigned int num);
int _print_octal(unsigned int num);
int _print_hex(unsigned int num, int uppercase);
int _putchar(char c);
int _print_normal(const char *format, char buffer[], int *buff_ind);
int _handle_custom(const char *format, va_list args, char buffer[], int *buff_ind);
int _handle_rot13(va_list args, char buffer[], int *buff_ind);

#endif
