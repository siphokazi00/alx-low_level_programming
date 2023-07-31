#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t count = 0;

	if (head == NULL)
		return (0);

	tortoise = head;
	hare = head->next;

	while (hare != NULL && hare < head)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		tortoise = tortoise->next;
		hare = hare->next;

		if (hare != NULL)
			hare = hare->next;

		count++;
	}

	if (hare != NULL)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
		printf("-> [%p] %d\n", (void *)hare, hare->n);
		exit(98);
	}

	printf("[%p] %d\n", (void *)tortoise, tortoise->n);
	count++;
	return (count);
}
