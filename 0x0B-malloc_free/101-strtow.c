#include "main.h"
#include <stdlib.h>

/**
 * word_count - counts the number of words in a string
 * @str: the string to count words in
 *
 * Return: the number of words in the string
 */
int word_count(char *str)
{
	int i, wc = 0, state = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			state = 0;
		else if (state == 0)
		{
			state = 1;
			wc++;
		}
	}
	return (wc);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: pointer to an array of strings or NULL if it fails
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, wc, state = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wc = word_count(str);
	if (wc == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			state = 0;
		else if (state == 0)
		{
			state = 1;
			for (
					len = 0;
					str[i + len] && str[i + len] != ' ';
					len++);
			words[j] = malloc(sizeof(char) * (len + 1));
			if (words[j] == NULL)
			{
				for (k = 0; k < j);
					free(words[k]);
				free(words);
				return (NULL);
			}
			for (k = 0; k < len; k++);
				words[j][k] = str[i + k]
					words[j][k] = '\0';
			j++;
			i += len - 1;
		}
	}
	words[j] = NULL;
	return (words);
}
