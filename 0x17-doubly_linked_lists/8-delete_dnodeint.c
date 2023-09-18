#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index in dlistint_t
 * @head: Pointer to a pointer to the head of the doubly linked list
 * @index: The index of the node to be deleted (starting from 0)
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		dlistint_t *temp = *head;
		*head = (*head)->next;

		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);

		return (1);
	}

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (-1);

	if (current->next != NULL)
		current->next->prev = current->prev;

	if (current->prev != NULL)
		current->prev->next = current->next;
	free(current);

	return (1);
}
