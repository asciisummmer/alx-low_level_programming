#include "main.h"

/**
* free_memory - liberer la memoire
* @array_int: array to free
* @height: size of array
*/

void free_memory(int **array_int, int height)
{
	int h = 0;

	if (height == 0)
	{
		free(array_int);
		array_int = NULL;
	}
	for (h = 0; h < height; h++)
	{
		free(array_int[h]);
		array_int[h] = NULL;
	}
	free(array_int);
	array_int = NULL;
}

/**
* alloc_grid - return size array
* @height: string to get lenght
* @width: string to get lenght
* Return: size of string
*/

int **alloc_grid(int width, int height)
{
	int i, j = 0;
	int **array_int = NULL;

	if (height <= 0 || width <= 0)
		return (NULL);
	array_int = malloc(sizeof(int *) * height);
	if (array_int == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array_int[i] = malloc(sizeof(int **) * width);
		if (array_int[i] == NULL)
		{
			free_memory(array_int, i);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array_int[i][j] = 0;
	}
	return (array_int);
}
