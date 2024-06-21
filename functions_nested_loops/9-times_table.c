#include "main.h"

/**
 * times_table - print 9 times table
 */
void times_table(void)
{
	int num1;
	int num2;
	int prod;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			prod = (num1 * num2);

			if (num2 != 0)
			{
				if (prod <= 9)
				{
				_putchar(' ');
				}
				_putchar(' ');
			}
			if (prod > 9)
			{
				_putchar('0' + (prod / 10));
				_putchar('0' + (prod % 10));
			}
			else
			{
				_putchar('0' + prod);
			}
			if (num2 != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
