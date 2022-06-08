#include "main.h"

/**
 * print_to_98 - print digit
 * @n: interval
 */

void print_to_98(int n)
{
	int increment = 0;

	if (n >= 98)
		increment = -1;
	else
		increment = 1;
	for (; n != 98; n += increment)
	{
		printf("%d, ", n);
	}
	printf("98\n");
}
