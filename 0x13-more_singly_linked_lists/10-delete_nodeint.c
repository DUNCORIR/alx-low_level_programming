#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Function that deletes the node at index.
 * of a listint_t linked list.
 * @head: The double pointer to head of list.
 * @index: The index of the node that should be deleted,index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	/* For empty list */
	if (*head == NULL)
		return (-1);

	/* If node to delete is the new code */
	if (index == 0)
	{
		temp = *head;
		/*Move head to the next node */
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	/* Traverse the node just before the one to be deleted.*/
	current = *head;
	for (i = 0; current && i < index - 1; i++)
	{
		current = current->next;
	}

	/* for out of range index */
	if (!current || !current->next)
		return (-1);

	/*delete the node at given index */
	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
