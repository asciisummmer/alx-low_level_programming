#include "function_pointers.h"

/**
* int_index - executes a function given as a parameter
* @array: array of int
* @size: size of the array
* @cmp: pointer to function for compare elements
* Return: -1 if no element matches else return index of element found.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size && size > 0; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
