#include "main.h"

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
			return (NULL);
		for (j = 0; j < width; j++)
			array_int[i][j] = 0;
		
	}
	return (array_int);
}
