#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @x: no. to be checked
 * Return: 1 for uppercase character or 0 for anything else
 */

int _isupper(int x)

{
	if (x >= 65 && x <= 90)
	{
	return (1);
	}
	return (0);
}
