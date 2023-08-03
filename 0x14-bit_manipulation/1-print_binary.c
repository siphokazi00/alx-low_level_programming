#include "main.h"
#include <stdio.h>

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int started = 0;

	while (mask > 0)
	{
		if ((n & mask) || started)
		{
			started = 1;
			putchar((n & mask) ? '1' : '0');
		}

		mask >>= 1;
	}

	if (!started)
		putchar('0');

	putchar('\n');
}
