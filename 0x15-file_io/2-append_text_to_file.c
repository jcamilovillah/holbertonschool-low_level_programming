#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to file
 * @text_content: contain the chars
 * Return: 1 or -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;

	if (filename)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
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
