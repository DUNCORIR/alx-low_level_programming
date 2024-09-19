#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a node to end
 * of a dlistint_t list.
 * @head: Double pointer to the head of list.
 * @n: The data(integer) that holds data in the added node.
 *
 * Return: The pointer to the added node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL); /*Memory allocation failure */
	}
	/* Initialize new node with given data */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	/*check if list is empty*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* Traverse the list to find last node */
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	/* link new node at the end of list */
	current->next = new_node;
	new_node->prev = current;

	/* Return new node*/
	return (new_node);
}
