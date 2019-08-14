#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: the name of the filename
 * @text_content: the text to write inside the file
 * Return: 1 if success -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, fd, wr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	while (text_content[i])
		i++;

	wr = write(fd, text_content, i);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);

}
