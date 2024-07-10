#include "main.h"
#include <stdlib.h>

/**
 **create_array - creates an array of chars
 *@size: size of the array
 *@c: the characters to put in the array
 *Return: 0 if size is 0 or process failed or a pointer to the start of the array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int count = 0;
	char *array;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
	{
		return(NULL);
	}
	while (count < size)
	{
		array[count] = c;
		count++;
	}
	return(array);
}
