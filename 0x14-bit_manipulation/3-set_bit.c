#include "main.h"
#include <stdio.h>

/**
 * set_bit - Sets a bit at a given index to 1.
 * @n: Pointer to the number to change.
 * @index: index of the bit to set to 1.
 *
 * Return: 1 if successful, -1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
        return (-1);

	mask = 1UL << index;
	*n |= mask;
	return (1);
}
