#include "main.h"

/**
 *print_chessboard - print a chessboard
 *@a: Multidimensional array containing the board
 */
void print_chessboard(char (*a)[8])
{
	int counta = 0;
	int countb = 0;

	while (counta < 8)
	{
		while (countb < 8)
		{
			_putchar(a[counta][countb]);
			countb++;
		}
		countb = 0;
		_putchar('\n');
		counta++;
	}
}
