#include "main.h"

/**
 * _atoi - string to integer
 * @s: string to convert
 *
 * Return: conversion of string to integer
 */

int _atoi(char *s)
{
	int sign = 1, find_integer = 1;
	int result = 0, i = 0;


	for (; s[i] != '\0' && find_integer; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			find_integer = 1;
			result += s[i] - 48;
			result *= 10;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				find_integer = 0;
		}
	}
	return (result / 10 * sign);
}
