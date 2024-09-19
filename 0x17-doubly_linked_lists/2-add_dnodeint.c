#include "lists.h"

/**
 * add_dnodeint - Function that adds node
 * beginning of doubly linked list.
 * @head: Double pointer to the head of doubly linked list
 * @n: Integer that holds data in new node.
 *
 * Return: The address of the new node added or
 * NULL if it fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node; /* pointer to the new node*/


	/* Dynamically allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL); /* Memory allocation failed */
	}
	/* Initialize the new node */
	new_node->n = n; /* Set the data field */
	new_node->prev = NULL; /* New node will be the first, so no previous node */
	new_node->next = *head; /* The next pointer points current head of the list*/
	if (*head != NULL)
	{
		(*head)->prev = new_node; /*Link the current head back to the new node */
	}
	*head = new_node; /*Update the head to point to the new node */
	return (new_node); /* Return the new node's address*/
}
