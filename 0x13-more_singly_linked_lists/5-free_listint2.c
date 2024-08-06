#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Function that frees a listint_t.
 * @head: Double pointer to head of list.
 *
 * Description: The function frees a listint2 and sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	/*set head to NULL */
	*head = NULL;
}
