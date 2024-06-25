#include "main.h"

/**
 *swap_int - swap value of a & b
 *@a: first value to swap
 *@b: second value
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
