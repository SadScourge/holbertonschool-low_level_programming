#include "main.h"

/**
 *_strncat - concatenate two strings but only the n first chars of src
 *@dest: first string
 *@src: second string
 *@n: number of character to cat
 *Return: reurn a pointer to the resulting string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;
	int count = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while ((count != n) && (*src != '\0'))
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	return (start);
}
