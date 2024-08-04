#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: text to append at the end
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t t;
	size_t s = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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

