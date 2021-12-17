#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 * Return: 1 else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *entry, *new_entry;
	int idx;

	if (!ht)
		return (0);
	if (strlen(key) == 0)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	entry = ht->array[idx];

	while (entry)
	{
		if (strcmp(entry->key, key) == 0)
		{
			free(entry->value);
			entry->value = strdup(value);
			return (1);
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
