#include "holberton.h"
/**
 *append_text_to_file - function that appends text at the end of file
 *@filename: name of file
 *@text_content: content of text
 *Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, fd;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	/*write*/

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	for (i = 0; *(text_content + i); i++)
		;

	write(fd, text_content, i);

	close(fd);

		return (1);
}
