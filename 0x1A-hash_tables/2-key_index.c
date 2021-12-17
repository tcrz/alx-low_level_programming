#include "hash_tables.h"

/**
 * key_index - returns index od an array
 * @key: key (string used to generate hash value)
 * @size: size of the array of the hash table
 * Return: index of key/value pair stored in array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashvalue;

	hashvalue = hash_djb2(key) % size;
	return (hashvalue);
}

