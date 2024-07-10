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
	int counts;
	int countc;
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
	concat = malloc(sizeof(char) * (lengths1 + lengths2));

	for (countc = 0; countc < lengths1; countc++)
	{
		concat[countc] = s1[countc];
	}
	for (counts = 0; counts < lengths2; counts++)
	{
		concat[countc + counts] = s2[counts];
	}
	if (concat[lengths1 + lengths2] == s2[lengths2])
	{
		return (concat);
	}
	else
	{
		return (NULL);
	}
}
