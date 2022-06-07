#include "main.h"
/**
 * _abs - print last digit
 * @val: value to print last digit
 * Return:  val if number is pos or nul otherwise -val
 */

int print_last_digit(int val)
{
	if (val >= 0)
		return (val % 10);
	return ((-val) % 10);
}
