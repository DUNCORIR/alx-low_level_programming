#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Function that free lists with loop.
 * @h: The double pointer to the head of list.
 *
 * Return: The function that sets the head to NULL.
 * Description: Function handles lists with loops then sets head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count;
	listint_t **checked;
	size_t checked_size = 1024, i;
	listint_t *temp;

	count = 0;
	/* checking NULL head */
	if (h == NULL || *h == NULL)
		return (0);
	/* Allocates memory to track checked nodes */
	checked = malloc(checked_size * sizeof(*checked));
	if (checked == NULL)
		exit(98);

	while (*h != NULL)
	{
		/*To check if current node have been checked before */
		for (i = 0; i < count; i++)
		{
			if (*h == checked[i])
			{
				/*free allocated memory for checked nodes array*/
				free(checked);
				*h = NULL;
				return (count);
			}
		}
		/*resizing checked array if neccesary */
		if (count == checked_size)
		{
			checked_size *= 2;
			checked = realloc(checked, checked_size * sizeof(*checked));
			if (checked == NULL)
				exit(98);
		}
		/* add current node to checked array*/
		checked[count++] = *h;
		/*moves to next node,free current node */
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}

	/* frees visited array and sets the head to NULL*/
	free(checked);
	*h = NULL;
	/* return number nodes freed */
	return (count);
}
