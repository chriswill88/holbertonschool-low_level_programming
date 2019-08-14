#include "holberton.h"
/**
 * read_textfile - read from a file and writes to stdout
 * @filename: the name of the file
 * @letters: the number of letters
 * Return: the number of chars read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, wr, rd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);
	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);
	rd = read(fd, buf, letters);
	if (rd == -1)
		return (0);

	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
		return (0);
	free(buf);
	close(fd);
	return (wr);
}
