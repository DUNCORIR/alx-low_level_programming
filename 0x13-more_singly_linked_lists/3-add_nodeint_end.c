#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - Function that adds a new node at the end of a list.
 * @head: The double pointer to the head of the list.
 * @n: Integer to be included in the new node.
 *
 * Return: Address to the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	/*Check for memory allocation failure */
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node's data */
	new_node->n = n;
	/* Sets the new node's next pointer to NULL */
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	/* Traversing to end of the list */
	while (temp->next != NULL)
		temp = temp->next;

	/*Update the last node's next pointer to the next node */
	temp->next = new_node;
	/* Returns the address of the new element */
	return (new_node);
}
