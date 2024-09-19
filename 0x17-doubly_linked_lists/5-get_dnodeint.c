#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns nth node
 * of a dlistint_t linked list
 * @head: The pointer to the head of the doubly list
 * @index: the index of the node to be returned.
 *
 * Return: The node at index of doubly linked list or
 * NULL if it doesn't.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	unsigned int current_index = 0;

	while (current != NULL)
	{
		if (current_index == index)
		{
			return (current);
		}
		current = current->next;
		current_index = current_index + 1;
	}
	return (NULL);
}
