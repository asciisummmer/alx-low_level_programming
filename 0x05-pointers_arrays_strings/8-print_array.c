#include "main.h"

#include <stdio.h>

/**
 * print_array - print array
 * @a: pointer to interger
 * @n: number of array to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	for (; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[i]);
}
