#include "main.h"
#include <stdio.h>

/**
 * get_bit - Returns the value of abit at an index in a deci no.
 * @n: no. to search
 * @index: index of the bit
 *
 * Return: The value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
