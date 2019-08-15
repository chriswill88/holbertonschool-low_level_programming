#include "holberton.h"

/**
 * errnots - the error opertations
 * @i: which error
 * @argv: the arguments for shell
 * @fd: the file decriptor
 * Return: void
 */
void errnots(int i, char **argv, int fd)
{
	if (i == 0)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (i == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else if (i == 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	else if (i == 3)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - cp function
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	int fd = 0, df, rd, wr;
	char buf[1024];

	if (argc != 3)
		errnots(0, argv, fd);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		errnots(1, argv, fd);
	df = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0777);
	if (df == -1)
		errnots(2, argv, fd);
	while (1)
	{
		rd = read(fd, buf, 1024);
		if (rd == -1)
			errnots(1, argv, fd);
	
		if (buf[0])
		{
			wr = write(df, buf, rd);
			if (wr == -1)
				errnots(2, argv, fd);
			if (wr < 1024)
				break;
		}
	}
	if (close(df) == -1)
		errnots(3, argv, df);
	if (close(fd) == -1)
		errnots(3, argv, fd);
	return (0);
}
