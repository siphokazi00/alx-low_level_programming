#include "main.h"
#include <stdio.h>

/**
 * count_set_bits - Counts the no. of set bits in a given no.
 * @num: The bits to be counted.
 *
 * Return: The number of set bits in the given number.
 */
unsigned int count_set_bits(unsigned long int num)
{
	unsigned int count = 0;

	while (num)
	{
		num &= (num - 1);
		count++;
	}
	return (count);
}

/**
 * flip_bits - Calculates no. of bits needed to be flipped
 * to convert one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: No. of bits needed to flip to convert n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;

	return (count_set_bits(xor_result));
}
