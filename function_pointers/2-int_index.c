#include <stdlib.h>
#include "function_pointers.h"

/**
 *int_index - search for an integer
 *@array: the array
 *@size: size of the array
 *@cmp: function that compare the int to the array
 *Return: the index of the first occurance found
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
	{
		return (-1);
	}
	if ((array == NULL) || (cmp == NULL))
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
	}
	return (-1);
}
