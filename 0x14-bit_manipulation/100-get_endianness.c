#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Check the endianness of the system.
 *
 * Return: 0 if system is big endian, 1 if it is little.
 */
int get_endianness(void)
{
	union endian_union endian;

	endian.num = 1;

	return ((endian.bytes[0] == 1) ? 1 : 0);
}
