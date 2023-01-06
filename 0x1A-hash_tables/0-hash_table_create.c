#include "hash_tables.h"

/**
 * * hash_table_create- Creating hash table
 * * @size: the size of items whithin the hash table
 * * Return: The newly creatd hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;

	if (!size)
		return (NULL);

	new_hash = calloc(1, sizeof(hash_table_t));
	if (new_hash == NULL)
	{
		free(new_hash);
		return (NULL);
	}

	new_hash->size = size;
	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash->array == NULL)
		return (NULL);

	return (new_hash);
}
