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
	int countchar;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		countchar = 0;
		while (argv[count][countchar] != '\0')
		{
			if (argv[count][countchar] < '0' || argv[count][countchar] > '9')
			{
				printf("Error\n");
				return (1);
			}
			countchar++;
		}
		result = result + atoi(argv[count]);
		count++;
	}
	printf("%d\n", result);
	return (0);

}
