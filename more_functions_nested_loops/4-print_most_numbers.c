#include "main.h"

/**
 *print_numbers - print digit from 0 to 9 except 2 & 4
 */
void print_most_numbers(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		if (d != 2 && d != 4)
		{
			_putchar('0' + d);
		}
	}
	_putchar('\n');
}
