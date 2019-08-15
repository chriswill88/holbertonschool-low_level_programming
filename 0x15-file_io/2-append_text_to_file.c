#include "holberton.h"
/**
 * append_text_to_file - appends words to a file
 * @filename: the filename
 * @text_content: the content to append_text_to_file
 * Return: 1 for success -1 for fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		printf("failed at open");
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (text_content[i])
		i++;

	wr = write(fd, text_content, i);
	
	if (wr == -1)
	{
		printf("failed at write");
		return (-1);
	}
	close(fd);
	return (1);
}
