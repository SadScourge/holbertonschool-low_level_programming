#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: file name
 * @letters: number of letters
 * Return: 0 in case of error or the actual
 * number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t rd;
	ssize_t wr;
	char *buffer = malloc(sizeof(char) * letters);

	if (!filename || !buffer)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);
	if (fd == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (wr);
}
