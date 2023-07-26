#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - Searches for an integer in the array based on the cmp function.
 * @array: The array to be searched.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function used for comparison.
 *
 * Return: The index of the first element for which cmp does not return 0.
 * If no element matches, return -1.
 * If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
