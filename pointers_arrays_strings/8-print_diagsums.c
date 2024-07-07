#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 */
void print_diagsums(int *a, int size)
{
	int countrow;
	int countcol;
	int result = 0;

	for (countrow = 0, countcol = 0; countrow < size; countrow++, countcol++)
	{
		*a
		result = result + a[countrow][countcol]
	}
	
	printf("%d", result);
	putchar('\n');
}
