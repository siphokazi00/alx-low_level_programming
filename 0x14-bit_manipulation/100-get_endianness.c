#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Checks endianness.
 *
 * Return: 0 for big, 1 for little.
 */
int get_endianness(void)
{
	union
	{
		int num;
		char bytes[sizeof(int)];
	} endian;

	endian.num = 1;

	return ((endian.bytes[0] == 1) ? 1 : 0);
}
