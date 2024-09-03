#include "hash_tables.h"

/**
 * hash_table_delete - Delete node
 * @ht: table of hashing
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *copy = NULL, *tmp = NULL;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				copy = tmp;
				tmp = tmp->next;
				free(copy->key);
				free(copy->value);
				free(copy);
			}
			ht->array[i] = NULL;
		}
	}
	free(ht->array);
	free(ht);
}
