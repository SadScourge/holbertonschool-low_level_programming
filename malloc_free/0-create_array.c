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
	char array[size];
	int *start = array;

	if (size == 0)
	{
		return(0);
	}
	while (count <= size)
	{
		array[count] = c;
		count++;
	}
	if (array[size] == c)
	{
		return (*start);
	}
	else
	{
		return (0);
	}
}
