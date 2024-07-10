#include "main.h"
#include <stdlib.h>

/**
 **str_concat - concatenate two string and allocate space for them
 *@s1: string 1
 *@s2: string 2
 *Return: pointer to the start of the string if suceed or NULL otherwise
*/
char *str_concat(char *s1, char *s2)
{
	int lengths1 = 0;
	int lengths2 = 0;
	int count;
	char *concat;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	while (s1[lengths1] != '\0')
	{
		lengths1++;
	}
	while (s2[lengths2] != '\0')
	{
		lengths2++;
	}
	concat = malloc(lengths1 + lengths2 + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < lengths1; count++)
	{
		concat[count] = s1[count];
	}
	for (count = 0; count < lengths2; count++)
	{
		concat[count + lengths1] = s2[count];
	}
	concat[lengths1 + lengths2] = '\0';
	return (concat);
}
