#include "main.h"

/**
* alloc_grid - return size array
* @height: string to get lenght
* @width: string to get lenght
* Return: size of string
*/

int **alloc_grid(int width, int height)
{
	int size = 0;
	int **array_int = NULL;

	if (height <= 0 || width <= 0)
		return (NULL);
	array_int = malloc(sizeof(int *) * height);
	if (array_int == NULL)
		return (NULL);
	for (size = 0; size < height; size++)
	{
		array_int[size] = malloc(sizeof(int **) * width);
	}
	return (array_int);
}
