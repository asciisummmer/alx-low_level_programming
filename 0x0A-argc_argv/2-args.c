#include "main.h"
/**
* main - display name program
* @argc: size of argv
* @argv: pointer of array
* Return: 0 just for success
*/

int main(int argc __attribute__((unused)), char *argv[]__attribute((unused)))
{
	while (*argv)
		printf("%s\n", *argv++);
	return (EXIT_SUCCESS);
}
