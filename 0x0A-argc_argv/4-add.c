#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 if one of the no.s contain non-digit symbols
 */
int main(int argc, char **argv)
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
						{
						printf("Error\n");
						return (1);
						}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
