#include "main.h"

/**
*_memcpy - copy the first memory area to the second
*@n: numbers of bytes to copy
*@src: first memory area
*@dest: second memory area
*Return: start of the dest memory area
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;
	unsigned int index = 0;

	while (index < n)
	{
		*dest = *src;
		src++;
		dest++;
		index++;
	}
	dest = start;
	return (dest);
}
