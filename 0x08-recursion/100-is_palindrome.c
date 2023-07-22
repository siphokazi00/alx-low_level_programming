#include "main.h"

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not
 * @s: The string to check for palindromicity
 *
 * Description: This function uses recursion to determine if the given string
 * is a palindrome, by calling a helper function _is_palindrome_helper
 *
 * Return: 1 if s is a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (_is_palindrome_helper(s, 0, len - 1));
}

/**
 * _is_palindrome_helper - Helper function to determine if a string is a
 * palindrome using recursion
 * @s: The string to check for palindromicity
 * @start: The current start index of the substring to check
 * @end: The current end index of the substring to check
 *
 * Return: 1 if s is a palindrome, otherwise 0
 */

int _is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (_is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * _strlen_recursion - Returns the length of a string
 * @s: Pointer to the string
 *
 * Description: This function uses recursion to traverse the string until it
 * reaches the end, indicated by '\0'. Once it reaches the
 * end, it returns 0. As the recursion unwinds, it adds 1 for each character
 * in the string, resulting in the final length of the string.
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
