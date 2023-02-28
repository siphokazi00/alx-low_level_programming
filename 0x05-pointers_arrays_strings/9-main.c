#include "main.h"
#include <stdio.h>

/**
 * main - check the cod
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First solve the problem. Then, write the code\n");
	printf("%s", s1);
	print("%s", ptr);
	return (0);
}
