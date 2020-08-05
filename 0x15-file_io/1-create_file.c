#include "holberton.h"
/**
 * create_file - function that creates a file.
 * @filename: pointer to file.
 * @text_content: string.
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;

	if (filename)
	{
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
		if (fd < 0)
			return (-1);

		if (text_content)
		{
			for (i = 0; text_content[i] != '\0'; i++)
			{
			}
			write(fd, text_content, i);
		}
		close(fd);
		return (1);
	}
	return (-1);
}
