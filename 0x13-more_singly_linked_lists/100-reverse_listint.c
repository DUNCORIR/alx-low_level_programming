#include "lists.h"

/**
 * reverse_listint - Function that reverses a listint_t list.
 * @head: Double pointer to the head of list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *current;

	current = *head;
	prev = NULL;

	while (current != NULL)
	{
		/* stores the next node */
		listint_t *next_node = current->next;
		/*Reverse current node's pointer */
		current->next = prev;
		/* move prev to current node */
		prev = current;
		/* moves current to next node */
		current = next_node;
	}

	/* Update Head to the new First node */
	*head = prev;
	/* Return a pointer to reversed list */
	return (*head);
}
