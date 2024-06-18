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
	r = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive");
	}
	else if (n == 0)
	{
		printf("is zero");
	}
	else
	{
		printf("is negative");
	}
	return (0);
}
