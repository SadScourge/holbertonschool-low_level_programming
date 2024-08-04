#include "main.h"

/**
 * create_file - create a file
 * @filename: file name
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t t;
	size_t s = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[s])
			s++;
		t = write(fd, text_content, s);
		if (t != (ssize_t)s)
		{
			close(fd);
			return (-1);
		}
	}
	if (close(fd) < 0)
		return (-1);
	return (1);
}
