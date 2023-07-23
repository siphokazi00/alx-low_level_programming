#include "main.h"
#include <stdlib.h>

/**
 * str_length - gets the length of a string
 * @str: string whose length to get
 *
 * Return: length of string
 */
unsigned int str_length(char *str)
{
	unsigned int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * @n: number
 *
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0, concat_len = 0;
	char *concatenated_str;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = str_length(s1);
	s2_len = str_length(s2);

	if (n >= s2_len)
		n = s2_len;

	concat_len = s1_len + n;

	concatenated_str = malloc((concat_len + 1) * sizeof(char));
	if (concatenated_str == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		concatenated_str[i] = s1[i];

	for (j = 0; j < n; j++)
		concatenated_str[i + j] = s2[j];

	concatenated_str[concat_len] = '\0';

	return (concatenated_str);
}
