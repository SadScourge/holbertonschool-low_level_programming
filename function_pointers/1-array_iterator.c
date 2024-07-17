#include <stdlib.h>
#include "function_pointers.h"

/**
 *array_iterator - executes a function on each element of an array
 *@array: the array
 *@size: the size of the array
 *@action: the function to perform
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if ((array != NULL) && (action != NULL))
	{
		for (index = 0; index < size; index++)
		{
			(*action)(array[index]);
		}
	}
}
