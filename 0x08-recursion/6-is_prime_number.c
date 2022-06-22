#include "main.h"

/**
* test_diviseur - identify all diviseur of number
* @x: dividende
* @y: diviseur
* Return: number of diviseur
*/

int test_diviseur(int x, int y)
{
	if (x % y == 0)
		return (1 + test_diviseur(x, y + 1));
	else if (y > x)
		return (0);
	else
		return (0 + test_diviseur(x, y + 1));
}

/**
* is_prime_number - check if number is prime or not
* @n: number to check is prime or not
* Return: 1 if number is primer else 0
*/

int is_prime_number(int n)
{
	int is_prime;

	if (n <= 1)
		return (0);
	is_prime = test_diviseur(n, 1);
	return ((is_prime > 2) ? 0 : 1);
}
