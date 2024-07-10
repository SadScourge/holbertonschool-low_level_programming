#include "main.h"
#include <stdlib.h>

/**
 **_strdup - duplicate the string and allocate space for it
 *@str: the string to duplicate
 *Return: pointer to the new string if suceed or NULL otherwise
*/
char *_strdup(char *str)
{
	int length;
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
	newstr = malloc(sizeof (char) * length);
	for (count = 0; count < length; count++)
	{
		newstr[count] = str[count];
	}
	if (newstr[length] == str[length])
	{
		return(newstr);
	}
	else
	{
		return (NULL);
	}
}
