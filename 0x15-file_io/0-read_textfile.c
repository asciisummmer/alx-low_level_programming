#include "main.h"
#include <stdio.h>
/**
 * read_textfile - read the text in file
 * @filename: the path of filename
 * @letters: number de characters
 *
 * Return: number of characters reading
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	int is_reading = 0;
	char *content = NULL;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	content = malloc(sizeof(char) * letters  + 1);
	if (content == NULL)
	{
		close(fd);
		return (0);
	}
	is_reading = read(fd, content, letters);
	if (is_reading == -1)
	{
		close(fd);
		return (0);
	}
	write(STDOUT_FILENO, content, is_reading);
	close(fd);
	return (is_reading);
}
