#include "main.h"

/**
 *_strcpy - copy the string in src to dest
 *@src: the original string
 *@dest: the copied string
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
