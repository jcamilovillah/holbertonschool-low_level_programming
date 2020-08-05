#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX.
 * @filename: pointer to file
 * @letters: number of letters
 * Return: Letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t n_bytes;

	if (filename)
	{
		fd = open(filename, O_RDONLY);
		if (fd < 0)
			return (0);

		buf = malloc(letters * sizeof(char));

		if (buf == NULL)
			return (0);

		n_bytes = read(fd, buf, letters);

		if (n_bytes < 0)
			return (0);

		n_bytes = write(STDOUT_FILENO, buf, n_bytes);

		if (n_bytes < 0)
			return (0);

		close(fd);
		free(buf);
		return (n_bytes);
	}
	return (0);
}
