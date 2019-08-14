#include "holberton.h"

int main(int argc, char **argv)
{
	int fd;
	int df;
	
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n")
		exit(98);
	}
	

	df = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (df == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n")

	}
}

