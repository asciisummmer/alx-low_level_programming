#include <stdio.h>
/**
 * main - Print combinaison of two two-digit numbers
 * Return: 0 to say everything is done
 */

int main(void)
{
	int num_o, num_t, num_th, num_fo;

	for (num_o = 0; num_o <= 9; num_o++)
	{
		for (num_t = 0; num_t <= 9; num_t++)
		{
			for (num_th = num_o; num_th <= 9; num_th++)
			{
				for (num_fo = (num_th == num_o) ? num_t + 1 : 0; num_fo <= 9; num_fo++)
				{
					putchar(num_o + 48);
					putchar(num_t + 48);
					putchar(' ');
					putchar(num_th + 48);
					putchar(num_fo + 48);
					if (num_o != 9 || num_t != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
