#include "main.h"

/**
* sum_them_all - sum arguments
* @n: number of argument
* Return: summ of variable argument
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int  sum = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 1; i <= n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
