#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Function adds a new node at the beginning of a list.
 * @head: Double pointer to the head of a list.
 * @n: Integer to be included in the new node.
 *
 * Return: The address of the new element ,or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node;

	/* Allocates memory for new node */
	new_node = malloc(sizeof(listint_t));
	/* checks if memory allocation failed */
	if (new_node == NULL)
		return (NULL);

	/* Initializes the new node's data */
	new_node->n = n;
	/* Sets the new node's next pointer to the current head */
	new_node->next = *head;

	/* Updates head of the list to point to the new node */
	*head = new_node;

	return (new_node);
}
