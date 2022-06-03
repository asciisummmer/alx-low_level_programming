#include <unistd.h>
/**
 * main - Print text on standard output with system call write
 * Return: 1 to say everything is done
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
