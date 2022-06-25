#include "main.h"
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
		if (argv[i][0] < '0' || argv[i][0] > '9')
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
