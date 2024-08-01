#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - Function that adds a new node at beginning of a list_t.
 * @head: The double pointer to the head of list_t list.
 * @str: String to be duplictaed and added to the new node
 *
 * Return: The address of the new element ,or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	/* Allocates memory for new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicating string */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Sets the length of the string */
	new_node->len = strlen(new_node->str);

	/* Points to the new node to the current head */
	new_node->next = *head;

	/* updates head of new node */
	*head = new_node;

	return (new_node);
}
