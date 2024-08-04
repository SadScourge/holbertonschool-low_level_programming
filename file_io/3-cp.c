#include "main.h"

/**
 * cp - copies the content of a file to another file.
 * @file_to: the copied file
 * @file_from: the file to copy
 * Return: 0 if succceed or 97, 98, 99 or 100 in case of error
 */
int cp(char *file_to, char *file_from)
{
	char *buffer[1024];
	int td, fd, fr, fw;
	int fc, ftc;

	fd = open(file_from, O_RDONLY);
	if (fd < 0)
		return (98);
	td = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (td < 0)
		return (99);
	fr = read(fd, buffer, 1024);
	if (fr < 0)
		return (98);
	while (fr > 0)
	{
		fw = write(td, buffer, fr);
		if (fw < 0)
			return (99);
		fr = read(fd, buffer, 1024);
		if (fr < 0)
			return (98);
	}
	fc = close(fd);
	if (fc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fc);
		return (100);
	}
	ftc = close(td);
	if (ftc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ftc);
		return (100);
	}
	return (0);
}

/**
 * main - the main function
 * @argc: number of arguments
 * @argv: the arguments
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int c;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	c = cp(argv[2], argv[1]);
	switch (c)
	{
		case (98):
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		case (99):
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		case (100):
			exit(100);
		default:
			return (0);
	}
}
