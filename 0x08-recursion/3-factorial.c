#include "main.h"
/**
* factorial - compute factorail of integers with recursion
* @n: number to compute factorial
* Return: factorial of number
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
