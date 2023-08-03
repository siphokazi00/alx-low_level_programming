#include "main.h"
#include <stdio.h>

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
