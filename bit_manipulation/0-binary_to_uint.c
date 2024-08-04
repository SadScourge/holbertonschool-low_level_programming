#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of the number in binary
 * Return: the converted number or 0 if b is NULL or a char isn't 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int index = 0;
	unsigned int result = 0;

	if (!b)
		return (0);

	while (b[index])
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);
		result = 2 * result + (b[index] - '0');
		index++;
	}

	return (result);
}
