#ifndef _FUNCTION_LIKE_MACRO_
#define _FUNCTION_LIKE_MACRO_

#include <stdio.h>
#define ABS(x) ((x) < 0 ? -(x) : (x))

/**
 * main - Computes the absolute value of a number x.
 *
 * Return: The absolute value of x.
 */
int main(void)
{
	int num = -10;
	int abs_num = ABS(num);

	printf("Absolute value of %d is %d\n", num, abs_num);

	return (0);
}
#endif
