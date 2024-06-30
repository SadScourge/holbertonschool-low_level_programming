#include "main.h"

/**
 *_strcat - concatenate two strings
 *@dest: first string
 *@src: second string
 *Return: reurn a pointer to the resulting string (dest)
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
