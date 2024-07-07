#include "main.h"
#include <stdio.h>

/**
 *main - print number of program arguments
 *@argc: number of argument
 *@argv: argument string
 *Return: always 0
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
