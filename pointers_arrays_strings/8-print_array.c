#include "main.h"
#include <stdio.h>

/**
 *print_array - print (n) characters of the array
 *@a: the array to print
 *@n: the number of character
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);
		if (count != n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
