#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int l;
	int c;
	int space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= size; l++)
		{
			for (space = size - l ; space > 0; space--)
			{
				_putchar(' ');
			}
			for (c = 0; c < l; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
