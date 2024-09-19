#include "lists.h"

/**
 * free_dlistint -Functions that frees a dlistint_t list.
 * @head : the pointer to the head of list to be freed.
 *
 * Description: The function frees dlistint_t .
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current; /* Pointer to traverse the list */
	dlistint_t *next_node; /* Temporary pointer to store the next node */

	current = head; /* start at end of the list */

	while (current != NULL) /* Traverse the list */
	{
		next_node = current->next; /* store reference to next node */
		free(current);
		current = next_node; /* Move to next node */
	}
}

