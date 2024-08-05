#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listinst_t list.
 * @h: Pointer to head of node.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	/* Traversing the list and print each element */
	while (h != NULL)
	{
		/* Prints the value of the current node */
		printf("%d\n", h->n);
		/*increment the node count */
		nodes++;
		/* Move to the next node */
		h = h->next;
	}

	/* Return the total number of nodes */
	return (nodes);
}
