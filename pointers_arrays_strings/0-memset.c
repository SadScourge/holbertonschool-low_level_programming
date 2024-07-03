#include "main.h"

/**
*_memset - set (n) first bytes of an memory area
*@n: numbers of bytes to set
*@s: start of the memory area
*@b: constant byte
*Return: start of the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;
	unsigned int index = 0;

	while (index < n)
	{
		*s = b;
		s++;
		index++;
	}
	s = s;
	return (start);
}