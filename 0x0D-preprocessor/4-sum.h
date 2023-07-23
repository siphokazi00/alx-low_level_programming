#ifndef _SUM_
#define _SUM_
#include <stdio.h>

/**
 * main - Computes the sum of two numbers x and y.
 * @x: first number
 * @y: second number
 *
 * Return: The sum of x and y.
 */
#define SUM(x, y) ((x) + (y))

int main(void)
{
	int num1 = 5;
	int num2 = 10;

	int result = SUM(num1, num2);

	printf("Sum of %d and %d is %d\n", num1, num2, result);

	return (0);
}
#endif
