#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Returns the no. of bits needed to be flipped
 * to get from one no. to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to change.
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
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

}
