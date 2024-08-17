#include "main.h"

/**
 * reverse_array - reverse array of int
 * @a: pointer to array of integer
 * @n: size of array
*/

void reverse_array(int *a, int n)
{
	int i = 0, temp = 0;

	for (; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
