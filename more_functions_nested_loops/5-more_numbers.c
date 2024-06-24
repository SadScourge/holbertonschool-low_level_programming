#include "main.h"

/**
 *more_numbers - print digit from 0 to 9 except 2 & 4
 */
void more_numbers(void)
{
	int n;
	int d;

	for (d = 1; d <= 10; d++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar('0' +  (n / 10));
			}
			_putchar('0' + (n % d));
		}
	_putchar('\n');
	}
}
