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
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = ~(1UL << index);


	return (1);
}
