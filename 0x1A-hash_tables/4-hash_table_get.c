#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with a key
 * @ht: hash table
 * @key: key
 * Return: 1 else 0
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *entry;
	int idx;

	idx = key_index((const unsigned char *)key, ht->size);
	entry = ht->array[idx];
	if (!entry)
		return (NULL);
	return (entry->value);

}
