#include "main.h"

/**
 * more_numbers - display digits without 2 and 4
 * Return: Nothing.
 */

void more_numbers(void)
{
	int i, digit = 0;

	for (i = 1; i <= 10; i++)
	{
		for (digit = 0; digit <= 14; digit++)
		{
			if (digit > 9)
				_putchar(digit / 10 + 48);
			_putchar(digit % 10 + 48);
		}
		_putchar('\n');
	}
}
