#include "main.h"

/**
 * print_diagonal - check if  is digit
 * @n: number of \
 * Return:  Nothing.
 */

void print_diagonal(int n)
{
	int space, i = 0;

	if (n <= 0)
		_putchar('\n');
	for (i = 1; n > 0 && i <= n; i++)
	{
		for (space = 1; space < i; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
