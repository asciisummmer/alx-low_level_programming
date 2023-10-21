#include "variadic_functions.h"
/**
 * sum_them_all - summ all integer
 * @n: number of integer
 *
 * Return: sum of number
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, res = 0;

	va_start(numbers, n);
	for (i = 1; i <= n; i++)
		res = res + va_arg(numbers, unsigned int);
	va_end(numbers);
	return (res);
}
