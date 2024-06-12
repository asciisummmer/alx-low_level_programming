#include "main.h"

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
 * _strlen - size of string
 * @s: string to check
 *
 * Return: len of string
**/

int _strlen(const char *s)
{
	int i = 0;

	for (i = 0; *(s + i); ++i)
	{

	}
	return (i);
}

/**
 * is_base_binary - check if string in base 2
 * @b: string to check
 *
 * Return: 1 if is binary else 0
**/

int is_base_binary(const char *b)
{
	int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * binary_to_uint - convert string in base 2 to unsigned int
 * @b: string to convert to unsigned int
 *
 * Return: number if string is binary else 0
**/

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0;
	int size = 0;

	if (b == NULL || !is_base_binary(b))
	{
		return (result);
	}
	size = _strlen(b) - 1;
	for (i = 0; b[i] != '\0'; i++, --size)
	{
		result += (b[i] - 48) * _power(2, size);
	}
	return (result);
}
