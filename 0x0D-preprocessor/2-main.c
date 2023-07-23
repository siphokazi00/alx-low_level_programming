#include <stdio.h>

/**
 * main - prints name of compilation file
 *
 * Return: name of file function is compiled from
 */
int main(void)
{
	printf("Compiled from file: %s\n", __FILE__);
	return (0);
}
