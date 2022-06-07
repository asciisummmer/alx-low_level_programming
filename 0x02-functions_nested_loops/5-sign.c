#include "main.h"
/**
 * print_sign - check if character is lowercase
 * @n: number to be checked
 * Return: 1 if number is pos, -1 if number is neg otherwise 0
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('0');
	return (0);
}
