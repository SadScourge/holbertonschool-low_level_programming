#include "main.h"
#include <stdlib.h>

/**
 **string_nconcat - concatenate two string and allocate space for them
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes to keep in s2
 *Return: pointer to the start of the string if suceed or NULL otherwise
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lengths1 = 0;
	unsigned int lengths2 = 0;
	unsigned int count;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[lengths1] != '\0')
	{
		lengths1++;
	}
	while ((s2[lengths2] != '\0') && (lengths2 != n))
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
