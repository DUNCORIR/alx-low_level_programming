#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given index of
 * doubly linked list.
 * @head: Double pointer to head of doubly linked list.
 * @index: the index at node
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_to_delete = *head;
	unsigned int current_index = 0;

	if (*head == NULL) /* Handle empty list*/
		return (-1);
	if (index == 0) /* Deleting head node*/
	{
		*head = node_to_delete->next; /* Move head to the next node */
		if (*head != NULL) /* Update prev pointer of new head, if it exists */
			(*head)->prev = NULL;
		free(node_to_delete); /* Free the original head node */
		return (1); /* Success */
	}
	/* Traverse the list to find the node at the given index */
	while (node_to_delete != NULL && current_index < index)
	{
		node_to_delete = node_to_delete->next;
		current_index++;
	}
	if (node_to_delete == NULL) /* If the node does not exist, return -1 */
		return (-1);
	/* If the node is not the last, update the next node's prev pointer */
	if (node_to_delete->next != NULL)
		node_to_delete->next->prev = node_to_delete->prev;
	/* Update the previous node's next pointer */
	if (node_to_delete->prev != NULL)
		node_to_delete->prev->next = node_to_delete->next;
	/* Free the memory of the node to delete */
	free(node_to_delete);
	return (1); /* Success */
}
