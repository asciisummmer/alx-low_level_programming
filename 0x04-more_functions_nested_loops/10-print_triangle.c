#include "main.h"

/**
 * print_triangle - print square
 * @size: siwe of square
 * Return:  Nothing.
 */

void print_triangle(int size)
{
	int charac, i = 0;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; size > 0 && i <= size; i++)
	{
		for (charac = 1; charac <= size - i; charac++)
		{
			_putchar(' ');
		}
		for (charac = 1; charac <= i; charac++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
