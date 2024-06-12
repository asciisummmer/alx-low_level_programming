#include "main.h"

/**
 * print_binary - print representation binary of number
 * @n: number to print representary
 *
 * Return: void
**/

void print_binary(unsigned long int n)
{
	int i = 0;
	int is_put_one = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 31; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			is_put_one = 1;
			_putchar('1');
		}
		else if (is_put_one)
		{
			_putchar('0');
		}
	}
}
