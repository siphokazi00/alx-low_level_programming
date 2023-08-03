#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Sets the value of a given bit to 0.
 * @n: Pointer to the number to change.
 * @index: index of the bit to clear.
 *
 * Return: 1 if succesful, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
