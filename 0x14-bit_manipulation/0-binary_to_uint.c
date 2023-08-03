#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary no. to an unsigned int
 * @b: String containing the binary no.
 *
 * Return: The converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = (result << 1) | (b[i] - '0');
	}

	return (result);
}
