#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Function that frees listint_t list.
 * @head: Pointer to the head of the list.
 *
 * Description: The function frees memory allocation to listint_t.
 */
void free_listint(listint_t *head)
{
	/* Initialize head with temp pointer*/
	listint_t *temp;

	/* Traverse through list */
	while (head != NULL)
	{
		temp = head->next;
		/*free meemory */
		free(head);
		/*moves head pointer to next pointer */
		head = temp;
	}
}
