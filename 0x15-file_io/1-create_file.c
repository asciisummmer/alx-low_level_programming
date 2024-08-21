#include "main.h"


/**
 * _strlen - compute size of string
 * @s: string to get size
 *
 * Return: size of string
*/

int _strlen(char *s)
{
	int size = 0;

	if (s == NULL)
	{
		return (size);
	}
	for (; s[size] != '\0'; size++)
	{
	}
	return (size);
}

/**
 * create_file - create file
 * @filename: path of file
 * @text_content: content to put in file
 *
 * Return: 1 if not fail else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	if (write(fd, text_content, _strlen(text_content)) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
