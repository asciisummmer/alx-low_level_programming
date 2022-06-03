#include <stdio.h>
/**
 * main - Print combinaison of three digits
 * Return: 0 to say everything is done
 */

int main(void)
{
	int num_o, num_t, num_th;

	for (num_o = 0; num_o <= 7; num_o++)
	{
		for (num_t = num_o + 1; num_t <= 8; num_t++)
		{
			for (num_th = num_t + 1; num_th <= 9; num_th++)
			{
				putchar(num_o + 48);
				putchar(num_t + 48);
				putchar(num_th + 48);
				if (num_o != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
