#include "main.h"

/**
 *rev_string - reverse a string
 *@s: string to reverse
 */
void rev_string(char *s)
{
	int length = 0;
	int index;
	char temp;

	while (s[length] != 0)
	{
		length++;
	}
	for (index = 0; index < length / 2; index++)
	{
		temp = s[index];
		s[index] = s[length - index - 1];
		s[length - index - 1] = temp;
	}
}
