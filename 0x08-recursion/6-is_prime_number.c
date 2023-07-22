#include "main.h"

/**
 * is_prime_number - Returns 1 if the input integer is a prime number,
 * otherwise returns 0
 * @n: The number to check for primality
 *
 * Description: This function uses recursion to determine if the given number
 * is prime. It does this by calling a helper function _is_prime_helper with
 * the initial value of i set to 2.
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_is_prime_helper(n, 2));
}

/**
 * _is_prime_helper - Helper function to determine if a number is prime using
 * recursion
 * @n: The number to check for primality
 * @i: The current value to test as a divisor of n
 *
 * Return: 1 if n is prime, otherwise 0
 */

int _is_prime_helper(int n, int i)

{
	if (i > n / 2)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (_is_prime_helper(n, i + 1));
}
