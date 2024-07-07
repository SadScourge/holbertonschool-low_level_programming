#include "main.h"
#include <stdio.h>

/**
 *main - print the program arguments
 *@argc: number of argument
 *@argv: argument string
 *Return: always 0
 */
int main(int argc, char **argv)
{
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}
