#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Function that returns sum of all data (n)
 * of listint_t.
 * @head: The head of a linked list.
 *
 * Return: The sum of all the data (n) of a listint_t,
 * if list is empty,return 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		/* All the data (n) of current node to the sum */
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
