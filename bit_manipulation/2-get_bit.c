#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number in base 10
 * @index: index to the bit
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (sizeof(n) * 8 < index)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
