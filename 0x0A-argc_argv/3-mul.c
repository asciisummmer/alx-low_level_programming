#include "main.h"
/**
* main - display name program
* @argc: size of argv
* @argv: pointer of array
* Return: 0 just for success
*/

int main(int argc __attribute__((unused)), char *argv[]__attribute((unused)))
{
	long a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	if (a >= -2147483648 && b >= -2147483648
	&& a <= 2147483647 && b <= 2147483647)
		printf("%ld\n", a * b);
	return (EXIT_SUCCESS);
}
