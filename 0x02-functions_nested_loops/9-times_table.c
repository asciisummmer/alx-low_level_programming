#include "main.h"

/**
 * times_table - display time
 * Write a function that
 * prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int num_o = 0;
	int num_t = 0;

	for (num_o = 0; num_o <= 9; num_o++)
	{
		for (num_t = 0 ; num_t <= 9; num_t++)
		{
			if (num_o * num_t >= 10)
			{
				_putchar((num_o * num_t) / 10 + '0');
				_putchar((num_o * num_t) % 10 + '0');
			}
			else
			{
				_putchar(num_o * num_t + '0');
			}
			if (num_t < 9)
			{
				_putchar(',');
				_putchar('\t');
			}
		}
		_putchar('\n');
	}
}
