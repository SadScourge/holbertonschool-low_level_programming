#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - print numbers from n to 98
 *@n: initial value
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
			printf(", ");
			}
			n--;
		}
	}
	else
	{
		printf("98");
	}
	putchar('\n');
}
