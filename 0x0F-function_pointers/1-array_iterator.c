#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter
* @array: array of int
* @size: size of the array
* @action: pointer to the function to execute on element of array
* Return: Nothing.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
