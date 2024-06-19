#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet ten time
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char n;

	for (n = 1; n <= 10; n++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}
