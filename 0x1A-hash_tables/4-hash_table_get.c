#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 *  * hash_table_get - Retrieves a value associated with a key.
 * @ht: Pointer to the hash table to look into.
 * @key: The key to search for.
 *
 * Return: The value associated with the key, or NULL if key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	/* Check if hash table or key is NULL */
	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL); /* Invalid input */
	}

	/* Calculate index using key_index function */
	index = key_index((const unsigned char *)key, ht->size);

	/* Access the linked list at that index */
	node = ht->array[index];

	/* Traverse the linked list  */
	while (node != NULL)
	{
		/* Check if the current node's key matches the input key */
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);  /* Return the associated value */
		}
		node = node->next; /* Move to the next node */
	}
	return (NULL);  /* If key is not found, return NULL */
}
