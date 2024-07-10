#include "main.h"
#include <stdlib.h>

/**
 **_strdup - duplicate the string and allocate space for it
 *@str: the string to duplicate
 *Return: pointer to the new string if suceed or NULL otherwise
*/
char *_strdup(char *str)
{
	int length = 0;
	int count;
	char *newstr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	newstr = malloc(length + 1);
	for (count = 0; count < length; count++)
	{
		newstr[count] = str[count];
	}
	if (newstr == NULL)
	{
		return (NULL);
	}
	newstr[count] = '\0';
	return (newstr);
}
