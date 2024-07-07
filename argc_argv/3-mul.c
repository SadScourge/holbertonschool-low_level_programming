#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - print the product of two numbers
 *@argc: number of argument
 *@argv: argument string
 *Return: always 0
 */
int main(int argc, char **argv)
{
	int result;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
