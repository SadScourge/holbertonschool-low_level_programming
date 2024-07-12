#include "main.h"
#include <stdlib.h>

/**
 **_calloc - allocate memory for an array
 *@nmemb: the bumber of element in the array
 *@size: size in bytes
 *Return: return a pointer to the array of NULL if it fail
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int count;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(size) * nmemb);
	if (array == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < nmemb; count++)
	{
		array[count] = 0;
	}
	array[count] = '\0';
	return (array);
}
