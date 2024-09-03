#include "hash_tables.h"

/**
 * hash_table_print - print hash_table key and value
 * @ht: hash table to print
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int is_printed = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL || ht->array == NULL)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				if (is_printed)
					printf(", ");
				is_printed++;
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
	return;
}
