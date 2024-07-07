#include "main.h"
#include <stdio.h>

/**
 *main - print program name
 *@argc: number of argument
 *@argv: argument string
 *Return: always 0
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
