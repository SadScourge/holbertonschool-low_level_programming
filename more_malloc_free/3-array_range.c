#include "main.h"
#include <stdlib.h>

/**
 **array_range - create an array with value from min to max
 *and alloc memory for it
 *@min: minimum value
 *@max: maximum value
 *Return: pointer to array or NULL if failed
*/
int *array_range(int min, int max)
{
	int *array;
	int temp;
	int count;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (temp = min, count = 0; temp <= max; temp++, count++)
	{
		array[count] = temp;
	}
	return (array);
}
