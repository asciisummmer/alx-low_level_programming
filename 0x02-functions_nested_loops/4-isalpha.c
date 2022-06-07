#include "main.h"
/**
 * _isalpha - check if character is lowercase
 * @c: caracter to be checked
 * Return: 1 if character is lower or upper case otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
