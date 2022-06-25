#include "main.h"

/**
* check_number - check if string is number
* @str: string to check
* Return: 0 if is number else 1
*/

int check_number(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
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
	long value, result = 0;
	int i = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (check_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		value = atoi(argv[i]);
		if (value >= -2147483648 && value <= 2147483647)
			result += value;
		else
			exit(EXIT_FAILURE);
	}
	printf("%ld\n", result);
	return (EXIT_SUCCESS);
}
