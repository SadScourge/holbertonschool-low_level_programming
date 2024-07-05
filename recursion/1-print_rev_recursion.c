#include "main.h"

/**
 *_print_rev_recursion - print the string in reverse
 *@s: the string to print
 */
void _print_rev_recursion(char *s)
{
	char temp;

	if (*s != '\0')
	{
		temp = *s;
		s++;
		_print_rev_recursion(s);
		_putchar(temp);
	}
}
