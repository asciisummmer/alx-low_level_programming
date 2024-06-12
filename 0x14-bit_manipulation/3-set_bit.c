#include "main.h"
#include <stdio.h>
/**
 * _power - compute power of number
 * @value: value to raise
 * @pow: power to raise
 *
 * Return: result of raise
**/

int _power(int value, int pow)
{
	if (pow == 0)
		return (1);
	if (pow == 1)
		return (value);
	return (value * _power(value, pow - 1));
}

/**
 * set_bit - set bit of index
 * @n: number
 * @index: index of bit
 * Return: 1 if is pk else 0
**/

int set_bit(unsigned long int *n, unsigned int index)
{
	int i = 0;
	unsigned long int result = 0;

	if (index >= 32)
		return (-1);
	for (i = 31; i >= 0; --i)
	{
		if (index == (unsigned int)i)
			result += _power(2, i);
		else
			result += ((*n >> i) & 1) * _power(2, i);
	}
	*n = result;
	return (1);
}
