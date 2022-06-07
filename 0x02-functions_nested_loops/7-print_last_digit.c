#include "main.h"
/**
 * print_last_digit - print last digit
 * @val: value to print last digit
 * Return:  val if number is pos or nul otherwise -val
 */

int print_last_digit(int val)
{
	if (val >= 0)
	{
		_putchar(val % 10 + '0');
		return (val % 10);
	}
	else
	{
		_putchar((-val) % 10 + '0');
		return ((-val) % 10);
	}
}
