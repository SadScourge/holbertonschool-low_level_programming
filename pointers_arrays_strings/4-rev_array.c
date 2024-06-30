#include "main.h"

/**
 *reverse_array - reverse an array of int
 *@a: array to reverse
 *@n: size of the array
 */
void reverse_array(int *a, int n)
{
	int index;
	int temp;

	for (index = 0; index < n / 2; index++)
	{
		temp = a[index];
		a[index] = a[n - index - 1];
		a[n - index - 1] = temp;
	}
}
