#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Function creates a hash table
 *
 * @size: The size of the array.
 *
 * Return: A pointer to newly created hash tabe or
 * NULL if something went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	/* Check if size is valid */
	if (size < 1)
		return (NULL);  /* Size invalid or 0 */
	/* Allocate memory for hash_table_t structure */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL); /* Allocation failed */
	/* Allocate memory for the array of pointers */
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	/* Initialize each element in the array to NULL */
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	/* Set the size of the hash table */
	ht->size = size;
	/* Return the pointer to the hash table */
	return (ht);
}
