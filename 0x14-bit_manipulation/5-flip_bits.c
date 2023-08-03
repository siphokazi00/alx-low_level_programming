#include "main.h"
#include <stdio.h>

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
	unsigned long int xor_result = n ^ m;
	return (count_set_bits(xor_result));
}
