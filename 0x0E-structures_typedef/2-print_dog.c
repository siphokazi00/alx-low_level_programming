#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a struct dog.
 * @d: Pointer to the struct dog variable to be printed.
 *
 * Description: This function prints the details of the struct dog pointed
 *              to by 'd' in the specified format.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{

		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
	else
	{
		return;
	}
}
