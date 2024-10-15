#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	/* Check if the hash table is NULL */
	if (ht == NULL)
		return;

	/* Loop through each index of the hash table array */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];  /* Get the first node in the current bucket */

		/* Traverse the linked list at this index, if it exists */
		while (node != NULL)
		{
			/* Store the next node before freeing current */
			temp = node->next;

			/* Free the dynamically allocated key and value */
			free(node->key);
			free(node->value);

			/* Free the current node */
			free(node);

			/* Move to the next node in the list */
			node = temp;
		}
	}
	/* Free the array of pointers (buckets) */
	free(ht->array);

	/* Free the hash table structure itself */
	free(ht);
}
