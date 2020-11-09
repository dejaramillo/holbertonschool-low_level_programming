#include "holberton.h"
/**
 *read_textfile - function that reads a text file and print
 *@filename: array
 *@letters : buffer
 *Return: ssize_T
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bt;
	char *buff;

	if (!filename)
		return (0);

	/*read*/

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	bt = read(fd, buff, letters);

	close(fd);

	/*write*/

	write(STDOUT_FILENO, buff, bt);

	return (bt);
}
