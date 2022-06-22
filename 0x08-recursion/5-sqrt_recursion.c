#include "main.h"
/**
* test_recursive_number - compute power of integers with recursion
* @x: number to compute square_root
* @y: supposed square root
* Return: square root
*/

int test_recursive_number(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y > x)
		return (-1);
	else
		return (test_recursive_number(x, y + 1));
}

/**
* _sqrt_recursion - compute square root of integer with recursion
* @n: number to compute square_root
* Return: power of number
*/

int _sqrt_recursion(int n)
{
	int sqrt = 0;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	sqrt = test_recursive_number(n, 2);
	return ((sqrt == 0) ? -1 : sqrt);
}
