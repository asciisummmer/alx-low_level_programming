#include "main.h"

/**
 * print_most_numbers - display digits without 2 and 4
 * Return: Nothing.
 */

void print_most_numbers(void)
{
	int digit = '0';

	for (; digit < '9'; digit++)
	{
		if (digit != '2' && digit != '4')
			_putchar(digit);
	}
	_putchar('\n');
}
