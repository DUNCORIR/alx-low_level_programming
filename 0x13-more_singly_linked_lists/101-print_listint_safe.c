#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Function that prints a listint_t list.
 * @head: The pointer to the head of list.
 *
 * Return: The number of nodes in the list.otherwise
 * exit the program with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	const listint_t **checked;

	size_t checked_size = 1024, i;

	count = 0;

	checked = malloc(checked_size * sizeof(checked));
	if (checked == NULL)
		exit(98);

	while (head != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (head == checked[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(checked);
				return (count);
			}
		}

		if (count == checked_size)
		{
			checked_size *= 2;
			checked = realloc(checked, checked_size * sizeof(*checked));
			if (checked == NULL)
				exit(98);
		}

		checked[count++] = head;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(checked);
	return (count);
}
