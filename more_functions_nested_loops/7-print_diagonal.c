#include "main.h"

/**
 * print_diagonal - print a diagonal
 * @n: number of lines to print
 */
void print_diagonal(int n)
{
	int ligne;
	int espace;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ligne = 0; ligne < n; ligne++)
		{
			for (espace = 0; espace < ligne; espace++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
