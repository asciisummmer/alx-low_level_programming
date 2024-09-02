#include "hash_tables.h"

/**
 * hash_table_get - set hash table
 * @ht: hash table
 * @key: key
 *
 * Return: value if operation is doing else NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL || _strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (_strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
