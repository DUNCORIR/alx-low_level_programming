#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Function that returns the number in a linked listint_t list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of elements in a linked list.
 */
size_t listint_len(const listint_t *h)
{
	/* Initialize counter to 0 */
	size_t count = 0;

	/* traversing the list until end */
	while (h != NULL)
	{
		/* increment counter for each node.*/
		count++;
		/* moves to next node */
		h = h->next;
	}

	/* Total count */
	return (count);
}

