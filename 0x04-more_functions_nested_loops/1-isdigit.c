#include "main.h"

/**
 * _isdigit - checks for a digit (0 thru 9)
 * @x: no. to be checked
 * Return: 1 if character is a digit, 0 otherwise
 */

int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
