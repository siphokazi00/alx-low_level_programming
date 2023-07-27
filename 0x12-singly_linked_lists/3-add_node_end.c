#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the pointer of the head of the list.
 * @str: The string to be duplicated and added as the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	char *str_copy;
	size_t str_len = 0;

	while (str && str[str_len])
		str_len++;

	str_copy = strdup(str);
	if (str && !str_copy)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(str_copy);
		return (NULL);
	}

	new_node->str = str_copy;
	new_node->len = str_len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
