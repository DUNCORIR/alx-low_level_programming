#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Function that returns nth node of a listint_t list
 * @index: Is the index of the node, starting at 0.
 * @head: Pointer to head of list.
 *
 * Return: The nth node.if node doesnt exist it returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_index;

	current_index = 0;
	/* Traversing through list */
	while (head != NULL)
	{
		if (current_index == index)
			return (head);
		head = head->next;
		current_index++;

		return (head);
	}
	return (NULL);
}
