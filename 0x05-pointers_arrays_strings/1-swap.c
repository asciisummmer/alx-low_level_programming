#include "main.h"

/**
 * swap_int - swap two integer
 * @a: pointer to first value
 * @b: pointer to second value
 */

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
