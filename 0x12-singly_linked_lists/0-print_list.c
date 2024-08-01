#include "lists.h"
#include <stdio.h>
/**
 * print_list - Function that prints all elements of list_t.
 * @str: The string 
 *
 * Return: the number of nodes.If str is NULL,print [0] (nil).
 *
 */
size_t print_list(const list_t *h)
{
	/* initialize node count to zero */
	size_t node_count = 0;

	/** iterating through list */
	while (h != NULL)
	{
		/* check for NULL string */
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		/* increment the node count */
		node_count++;
		h = h->next;
	}
	/* number of nodes */
	return node_count;
}
