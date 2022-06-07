#include "main.h"

/**
 * times_table - display time
 * Write a function that prints every num_tute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
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
			//_putchar(num_o % 10 + '0');
            if (num_t < 9)
            {
			_putchar(',');
            _putchar('\t');
            }
			//_putchar(num_t / 10 + '0');
			//_putchar(num_t % 10 + '0');
		}
        _putchar('\n');
	}
}

int main(void)
{
    times_table();
    return (0);
}