#include "main.h"

/**
 *_strncpy - copy the first string into the second
 *@dest: second string
 *@src: first string
 *@n: number of character to copy
 *Return: starting of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;
	int count = 0;

	while ((count < n) && (*src != '\0'))
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	while (count < n)
	{
		*dest = '\0';
		count++;
		dest++;
	}
	return (start);
}
