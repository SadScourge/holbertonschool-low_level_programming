#include <stdio.h>
#include "main.h"

/**
 *print_diagsums - print the sum of the two diagonal in aa square matrix
 *@a: the 2d array
 *@size: the size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int count;
	int result1 = 0;
	int result2 = 0;

	for (count = 0; count < size * size; count = count + size + 1)
	{
		result1 = result1 + a[count];
	}
	for (count = size - 1; count < (size * size) - 1; count = count + size - 1)
	{
		result2 = result2 + a[count];
	}
	printf("%d, %d\n", result1, result2);
}
