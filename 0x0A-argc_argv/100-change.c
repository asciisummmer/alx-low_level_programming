#include "main.h"

/**
* get_minimum_coins - get minimum coins
* @coins: value of amount of money
* Return: the minimum number of coins
*/

int get_minimum_coins(int coins)
{
	int min_coins = 0;

	if (coins >= 25)
	{
		min_coins += coins / 25;
		coins = coins % 25;
	}
	if (coins >= 10)
	{
		min_coins += coins / 10;
		coins = coins % 10;
	}
	if (coins >= 5)
	{
		min_coins += coins / 5;
		coins = coins % 5;
	}
	if (coins >= 2)
	{
		min_coins += coins / 2;
		coins = coins % 2;
	}
	if (coins >= 1)
	{
		min_coins += coins / 1;
		coins = coins % 1;
	}
	return (min_coins);
}

/**
* check_number - check if string is number
* @str: string to check
* Return: 0 if is number else 1
*/

int check_number(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '-')
			return (1);
	}
	return (0);
}

/**
* main - display name program
* @argc: size of argv
* @argv: pointer of array
* Return: 0 just for success
*/

int main(int argc __attribute__((unused)), char *argv[]__attribute((unused)))
{
	long value = 0;
	int result = 0;

	if (argc != 2 || check_number(argv[1]))
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	if (value >= 1 && value <= 2147483647)
	{
		result = get_minimum_coins(value);
		printf("%d\n", result);
	}
	else
	{
			printf("0\n");
	}
	return (EXIT_SUCCESS);
}
