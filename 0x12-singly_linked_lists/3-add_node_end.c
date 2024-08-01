#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Function that adds a new node to end of list_t.
 * @head: Double  Pointer to the head of list_h.
 * @str: String  to be duplicated and added to the new node
 *
 * Return: The address to the new element ,or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* Pointer to new node */
	list_t *new_node;
	/* Temp pointer to be traversed.*/
	list_t *temp;

	/* Allocates memory for new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the stringn*/
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* initialize the new node's fields */
	new_node->len = strlen(new_node->str);
	new_node->next = NULL;

	/*For empty list,new nodes becomes head */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/*traverse end of list otherwise*/
		temp = *head;
		while (temp->next)
			temp = temp->next;
		/*add new node at end*/
		temp->next = new_node;
	}

	/* address of new element*/
	return (new_node);
}


