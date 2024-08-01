#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - Function that frees a list_t list.
 * @head: pointer to the head of the list to be freed.
 */
void free_list(list_t *head)
{
	/* temp pointer holding current node */
	list_t *temp;

	while (head)
	{
		/* store current node in temp */
		temp = head;
		/* move to next node */
		head = head->next;
		/* free string allocated with strdup*/
		free(temp->str);
		/*free node itself*/
		free(temp);
	}
}
