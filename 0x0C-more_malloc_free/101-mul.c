#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit (0-9).
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - Calculates the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * _exit_error - Prints "Error" and exits the program with a status of 98.
 */
void _exit_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * _multiply - Multiplies two positive numbers.
 * @num1: The first number to multiply.
 * @num2: The second number to multiply.
 *
 * Return: The result of the multiplication.
 */
char *_multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len_result = len1 + len2;
	int i, j, carry, product;
	char *result;

	result = calloc(len_result + 1, sizeof(char));
	if (result == NULL)
		_exit_error();

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			product =
				(num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1] - '0';
			carry = product / 10;
			result[i + j + 1] = (product % 10) + '0';
		}
		result[i] += carry;
	}
	for (i = 0; result[i] == '0' && result[i + 1] != '\0'; i++)
		;

	if (i > 0)
	{
		for (j = 0; j <= len_result - i; j++)
			result[j] = result[j + i];
	}
	return (result);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *result;
	int i;

	if (argc != 3)
	{
		_exit_error();
	}

	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!_isdigit(num1[i]))
		{
			_exit_error();
		}
	}
	for (i = 0; num2[i] != '\0'; i++)
	{
		if (!_isdigit(num2[i]))
		{
			_exit_error();
		}
	}
	result = _multiply(num1, num2);
	printf("%s\n", result);

	free(result);
	return (0);
}
