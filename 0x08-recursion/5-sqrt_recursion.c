#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Description: This function uses recursion to calculate the natural square
 * root of the given number.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - Helper function to calculate the natural square root of a
 * number using recursion
 * @n: The number to calculate the square root of
 * @i: The current value to test as the square root of n
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root
 */

int _sqrt_helper(int n, int i)

{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_helper(n, i + 1));
}
