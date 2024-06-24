#include "main.h"

/**
 * print_square - print a square
 * @size: size of the square
 */
void print_square(int size)
{
	int l;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < size; l++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
