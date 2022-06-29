#include "main.h"
/**
* create_array - alloc size for array
* @size: size of array
* @c: character to initialise array
* Return: address memory to array
*/

char *create_array(unsigned int size, char c __attribute__((unused)))
{
	char *array = NULL;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = 'c';
	return (array);
}
