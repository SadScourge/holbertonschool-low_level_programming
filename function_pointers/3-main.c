#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 *main - print the result of computation
 *@argc: number of parameters
 *@argv: input parameters
 *Return: always 0
 */
int main(int argc, char **argv)
{
	int result;
	int (*func)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
		&& (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = (*func)(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
