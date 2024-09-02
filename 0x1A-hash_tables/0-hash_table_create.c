#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: size of array
 *
 * Return: NULL if malloc error else pointer of new hashtable
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
		return (NULL);
	hash_table->size = size;
	return (hash_table);
}