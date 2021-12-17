#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value associated with key else NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *entry;
	int idx;

	if (!ht)
		return (NULL);
	if (strlen(key) == 0)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	entry = ht->array[idx];
	if (!entry)
		return (NULL);
	return (entry->value);

}
