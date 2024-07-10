#include "main.h"
#include <stdlib.h>

/**
 **malloc_checked - allocate memory
 *@b: size of the allocated space
 *Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *allocspace;

	allocspace = malloc(b);
	if (allocspace == NULL)
	{
		exit(98);
	}
	return (allocspace);
}
