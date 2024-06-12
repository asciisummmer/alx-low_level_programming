#include "main.h"

/**
 * get_bit - get bit of index
 * @n: number
 * @index: index of bit
 * Return: value at index
**/

int get_bit(unsigned long int n, unsigned int index)
{

	if (index >= 32)
		return (-1);

	return ((n >> index) & 1);
}
