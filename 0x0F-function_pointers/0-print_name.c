#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a given function.
 * @name: The name to be printed.
 * @f: A function pointer that takes a char pointer as an argument.
 *
 * Description: This function takes a name and calls the function pointed by
 * the function pointer 'f' to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
