#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts node at given position.
 * @idx: The index of list where new node is added.
 * if not possible,don't add ,return NULL.
 * @n: The data to be added to the list.
 * @h: Double pointer to the head of Doubly linked list.
 *
 * Return: The address of new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int current_index;


	if (h == NULL)
		return (NULL); /* Handle case when the list is empty/invalid input */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL); /* Memory allocation failed*/
	}
	new_node->n = n; /* assign data to new_node */
	if (idx == 0) /* Inserting at end of the list */
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	/* Traverse the list to find new node at position idx */
	current = *h;
	current_index = 0;
	while (current != NULL && current_index < idx - 1)
	{
		current = current->next;
		current_index++;
	}
	if (current == NULL) /* If index out of bounds*/
		return (NULL);
	new_node->next = current->next; /*link new_node into list */
	new_node->prev = current;

	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
