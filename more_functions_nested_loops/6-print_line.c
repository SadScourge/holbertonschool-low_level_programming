#include "main.h"

/**
 *print_line - print '_' times 'n'
 *@n: numbers of time to print _
 */
void print_line(int n)
{
	int d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d = 0; d <= n; d++)
		{
			_putchar(98);
		}
		_purchar('\n');
	}
}
