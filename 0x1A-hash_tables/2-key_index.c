#include "hash_tables.h"

/**
 * key_index - give index of key
 * @key: key of map
 * @size: size of array
 *
 * Return: index of key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int index = hash_djb2(key);

	return (index % size);
}
