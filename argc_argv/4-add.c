#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - print the sum of all args
 *@argc: number of argument
 *@argv: argument string
 *Return: 1 if the is an error 0 otherwise
 */
int main(int argc, char **argv)
{
	int result = 0;
	int count = 1;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		if (atoi(argv[count]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		result = result + atoi(argv[count]);
		count++;
	}
	printf("%d\n", result);
	return (0);

}
