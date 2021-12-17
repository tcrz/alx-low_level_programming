#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	int i;
	hash_node_t *entry, *tmp;

	if (!ht)
		return;
	i = 0;
	while (i < (int)ht->size)
	{
		entry = ht->array[i];
		if (entry)
		{
			while (entry)
			{
				free(entry->key);
				free(entry->value);
				tmp = entry;
				entry = entry->next;
				free(tmp);
			}

		}
		i++;
	}
	free(ht->array);
	free(ht);
}
