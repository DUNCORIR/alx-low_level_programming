#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - Function that finds the loop in a linked list.
 * @head: The double pointer to the head of the list.
 *
 * Return: The address of the node where the loops start,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	/* traversing through the list */
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		/* loop is dectected */
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			/*start of loop */
			return (slow);
		}
	}
	/* for no loop */
	return (NULL);
}
