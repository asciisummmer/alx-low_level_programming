#include <stdio.h>
/**
 * main - Print combinaison of two digits
 * Return: 0 to say everything is done
 */

int main(void)
{
	int num_o, num_t;

	for (num_o = 0; num_o <= 8; num_o++)
	{
		for (num_t = num_o + 1; num_t <= 9; num_t++)
		{
			putchar(num_o + 48);
			putchar(num_t + 48);
			if (num_o != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
