#include "holberton.h"
/**
 *create_file - function for create file
 *@filename: name file
 *@text_content: content of text
 *Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int i, fd;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	/* write */

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	for (i = 0; *(text_content + i); i++)
		;

	i = write(fd, text_content, i);

	close(fd);

	return (1);
}
