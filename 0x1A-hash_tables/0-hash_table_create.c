#include "hash_tables.h"

/**
* hash_table_create - creates a hash table
* @size: size of the array
*
* Return: pointer to the newly created hash table
*/


hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t  *hash_table = malloc(sizeof(hash_table_t));

	if (size == 0)
		return (NULL);
	if (!hash_table)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash_table->array)
		return (NULL);
	i = 0;
	while (i < size)
	{
		hash_table->array[i] = NULL;
		i++;
	}
	return (hash_table);

}