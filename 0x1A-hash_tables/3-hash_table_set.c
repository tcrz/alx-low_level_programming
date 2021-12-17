#include "hash_tables.h"

/**
 * hash_table_set - implementation of the djb2 algorithm
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 * Return: 1 else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *entry, *new_entry;
	int idx;

	idx = key_index((const unsigned char *)key, ht->size);
	entry = ht->array[idx];

	while (entry)
	{
		if (strcmp(entry->key, key) == 0)
		{
			free(entry->value);
			entry->value = malloc(strlen(value) + 1);
			if (!entry->value)
				return (0);
			entry->value = strdup(value);
			return (21);
		}
		entry = entry->next;
	}

	new_entry = malloc(sizeof(hash_node_t));
	if (!new_entry)
		return (0);
	new_entry->key = strdup(key);
	new_entry->value = strdup(value);
	new_entry->next = ht->array[idx];
	ht->array[idx] = new_entry;
	return (1);
}
