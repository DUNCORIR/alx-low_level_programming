#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Function that deletes the head node of a listint_t
 * and returns head node's data (n).
 * @head: Double pointer to head list.
 *
 * Return: The head node's data (n).if linked list is empty,
 * return 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL || head == NULL)
		return (0);

	/* store data of node in variable n */
	data = (*head)->n;

	/* update head pointer */

	temp = *head;
	*head = (*head)->next;

	/*free old head node */
	free(temp);

	/*Return stored data */
	return (data);
}
