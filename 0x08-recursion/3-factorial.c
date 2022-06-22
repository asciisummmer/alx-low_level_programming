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
	{
		return (1);
	}
	else
	{
		return n * factorial(n - 1);
	}
}

int main(void)
{
    int r;

    r = factorial(1);
    printf("%d\n", r);
    r = factorial(5);
    printf("%d\n", r);
    r = factorial(10);
    printf("%d\n", r);
    r = factorial(-1024);
    printf("%d\n", r);
    return (0);
}