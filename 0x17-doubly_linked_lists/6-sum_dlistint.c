#include "lists.h"

/**
 * sum_dlistint -Function returns the sum of all data n,
 * of a dlistint_t
 * @head: The pointer to the head of list.
 *
 * Return: The sum of all data n or 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current; /* Pointer to traverse list */
	int sum = 0; /*initialize sum to 0 */

	current = head; /* Start at head of list */
	while (current != NULL)
	{
		sum = sum + current->n; /*Add data from current node to the next*/
		current = current->next; /* move to next node in list*/
	}
	return (sum); /*Return total sum */
}
