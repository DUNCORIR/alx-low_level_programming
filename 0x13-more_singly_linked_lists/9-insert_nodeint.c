#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Function that inserts a new node to a list..
 * @head: The double pointer to head of a given list.
 * @idx: The index of the list where new node should be added.
 * @n: The data to be added to the list.
 *
 * Return: The address of the new node, or NULL if it failed.
 * if not possible to add the new node at index idx,return NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	/* Allocates memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	/* sets data for the new node */
	new_node->n = n;

	/* For new_node adding at the beginning */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Traverse upto the node before insertion point */
	current = *head;
	for (i = 0; current && i < idx - 1; i++)
	{
		current = current->next;
	}

	/* For out of range index */
	if (!current)
	{
		free(new_node);
		return (NULL);
	}

	/* Inserting at the new node */
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
