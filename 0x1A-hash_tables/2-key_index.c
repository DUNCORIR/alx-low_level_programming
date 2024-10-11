#include "hash_tables.h"
/**
 * key_index - Gives the index of a key in a hash table.
 * @key: The key to hash
 * @size: The size of the array of the table.
 *
 * Return: The index at which the key or value pair should be
 * stored in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	/* Get the hash value using the hash_djb2 function */
	hash = hash_djb2(key);

	/* Return index using modulus of the hash with size */
	return (hash % size);
}
