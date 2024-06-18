#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Check if n is superior, equal or inferior
 *
 * Return: always zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive");
	}
	else if (n == 0)
	{
		printf("%d is zero");
	}
	else
	{
		printf("%d is negative");
	}
	return (0);
}
