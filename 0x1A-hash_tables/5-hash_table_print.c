#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *entry = NULL;
	int x = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		entry = ht->array[i];
		if (entry)
		{
			while (entry)
			{
				if (x > 0)
					printf(", ");
				printf("'%s': '%s'", entry->key, entry->value);
				x = 1;
				entry = entry->next;
			}
		}
	}
	printf("}\n");

}

