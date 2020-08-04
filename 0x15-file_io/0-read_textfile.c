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
	char buf[1024];
	ssize_t n_bytes;

	if (filename)
	{
		fd = open(filename, O_RDONLY);
		if (fd < 0)
			return (0);

		n_bytes = read(fd, buf, letters);

		if (n_bytes == 0)
			return (0);

		n_bytes = write(STDOUT_FILENO, buf, n_bytes);
		close(fd);

		if (n_bytes == 0)
			return (0);

		return (n_bytes);
	}
	return (0);
}
