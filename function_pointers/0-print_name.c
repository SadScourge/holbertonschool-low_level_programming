#include <stdlib.h>
#include "function_pointers.h"

/**
 *print_name - print the string given
 *@name: the name to print
 *@f: the function that will print the name
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
