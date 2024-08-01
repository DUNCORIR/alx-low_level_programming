#include "lists.h"
#include <stdio.h>

/**
 * list_len - Function that returns number of elements on list_t.
 * @h: The pointer to the list_t list.
 *
 * Return: The number of elements in the list_t.
*/
size_t list_len(const list_t *h)
{
	/* Initialize a counter to keep track of the number */
	size_t count = 0;

	/* Traversing the list */
	while (h != NULL)
	{
		/* increment the counter for each node */
		count++;
		/* Move to the next node */
		h = h->next;
	}
	/* Total number of elements */
	return (count);
}
