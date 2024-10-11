#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * create_new_node - Creates a new hash node.
 * @key: The key for the node.
 * @value: The value associated with the key.
 *
 * Return: A pointer to the newly created node or NULL on failure.
 */
hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}

/**
 *  * hash_table_set - Adds or updates a key/value in a hash table.
 *  @ht: The hash table.
 *  @key: The key (must not be an empty string).
 *  @value: The value (can be an empty string).
 *
 *  Return: 1 if succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	/* Compute the index  at the beginning */
	index = key_index((const unsigned char *)key, ht->size);
	new_node = create_new_node(key, value); /* Create new node */
	if (new_node == NULL)
		return (0); /* Return 0 if memory allocation failed */
	if (ht->array[index] != NULL)  /* Collision exists */
		new_node->next = ht->array[index]; /* Points current first node */
	ht->array[index] = new_node; /*Insert the new node at beginning */
	return (1);
}
